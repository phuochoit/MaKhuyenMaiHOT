/**
 * @file
 * JavaScript behaviors for the front-end display of webforms.
 */

(function ($) {

  "use strict";

  Drupal.behaviors.webform = Drupal.behaviors.webform || {};

  Drupal.behaviors.webform.attach = function (context) {
    // Calendar datepicker behavior.
    Drupal.webform.datepicker(context);

    // Conditional logic.
    if (Drupal.settings.webform && Drupal.settings.webform.conditionals) {
      Drupal.webform.conditional(context);
    }
  };

  Drupal.webform = Drupal.webform || {};

  Drupal.webform.datepicker = function (context) {
    $('div.webform-datepicker').each(function () {
      var $webformDatepicker = $(this);
      var $calendar = $webformDatepicker.find('input.webform-calendar');

      // Ensure the page we're on actually contains a datepicker.
      if ($calendar.length == 0) {
        return;
      }

      var startDate = $calendar[0].className.replace(/.*webform-calendar-start-(\d{4}-\d{2}-\d{2}).*/, '$1').split('-');
      var endDate = $calendar[0].className.replace(/.*webform-calendar-end-(\d{4}-\d{2}-\d{2}).*/, '$1').split('-');
      var firstDay = $calendar[0].className.replace(/.*webform-calendar-day-(\d).*/, '$1');
      // Convert date strings into actual Date objects.
      startDate = new Date(startDate[0], startDate[1] - 1, startDate[2]);
      endDate = new Date(endDate[0], endDate[1] - 1, endDate[2]);

      // Ensure that start comes before end for datepicker.
      if (startDate > endDate) {
        var laterDate = startDate;
        startDate = endDate;
        endDate = laterDate;
      }

      var startYear = startDate.getFullYear();
      var endYear = endDate.getFullYear();

      // Set up the jQuery datepicker element.
      $calendar.datepicker({
        dateFormat: 'yy-mm-dd',
        yearRange: startYear + ':' + endYear,
        firstDay: parseInt(firstDay),
        minDate: startDate,
        maxDate: endDate,
        onSelect: function (dateText, inst) {
          var date = dateText.split('-');
          $webformDatepicker.find('select.year, input.year').val(+date[0]).trigger('change');
          $webformDatepicker.find('select.month').val(+date[1]).trigger('change');
          $webformDatepicker.find('select.day').val(+date[2]).trigger('change');
        },
        beforeShow: function (input, inst) {
          // Get the select list values.
          var year = $webformDatepicker.find('select.year, input.year').val();
          var month = $webformDatepicker.find('select.month').val();
          var day = $webformDatepicker.find('select.day').val();

          // If empty, default to the current year/month/day in the popup.
          var today = new Date();
          year = year ? year : today.getFullYear();
          month = month ? month : today.getMonth() + 1;
          day = day ? day : today.getDate();

          // Make sure that the default year fits in the available options.
          year = (year < startYear || year > endYear) ? startYear : year;

          // jQuery UI Datepicker will read the input field and base its date
          // off of that, even though in our case the input field is a button.
          $(input).val(year + '-' + month + '-' + day);
        }
      });

      // Prevent the calendar button from submitting the form.
      $calendar.click(function (event) {
        $(this).focus();
        event.preventDefault();
      });
    });
  };

  Drupal.webform.conditional = function (context) {
    // Add the bindings to each webform on the page.
    $.each(Drupal.settings.webform.conditionals, function (formKey, settings) {
      var $form = $('.' + formKey + ':not(.webform-conditional-processed)');
      $form.each(function (index, currentForm) {
        var $currentForm = $(currentForm);
        $currentForm.addClass('webform-conditional-processed');
        $currentForm.bind('change', {'settings': settings}, Drupal.webform.conditionalCheck);

        // Trigger all the elements that cause conditionals on this form.
        Drupal.webform.doConditions($currentForm, settings);
      });
    });
  };

  /**
   * Event handler to respond to field changes in a form.
   *
   * This event is bound to the entire form, not individual fields.
   */
  Drupal.webform.conditionalCheck = function (e) {
    var $triggerElement = $(e.target).closest('.webform-component');
    var $form = $triggerElement.closest('form');
    var triggerElementKey = $triggerElement.attr('class').match(/webform-component--[^ ]+/)[0];
    var settings = e.data.settings;
    if (settings.sourceMap[triggerElementKey]) {
      Drupal.webform.doConditions($form, settings);
    }
  };

  /**
   * Processes all conditional.
   */
  Drupal.webform.doConditions = function ($form, settings) {

    var stackPointer;
    var resultStack;

    /**
     * Initializes an execution stack for a conditional group's rules.
     *
     * Also initializes sub-conditional rules.
     */
    function executionStackInitialize(andor) {
      stackPointer = -1;
      resultStack = [];
      executionStackPush(andor);
    }

    /**
     * Starts a new subconditional for the given and/or operator.
     */
    function executionStackPush(andor) {
      resultStack[++stackPointer] = {
        results: [],
        andor: andor,
      };
    }

    /**
     * Adds a rule's result to the current sub-conditional.
     */
    function executionStackAccumulate(result) {
      resultStack[stackPointer]['results'].push(result);
    }

    /**
     * Finishes a sub-conditional and adds the result to the parent stack frame.
     */
    function executionStackPop() {
      // Calculate the and/or result.
      var stackFrame = resultStack[stackPointer];
      // Pop stack and protect against stack underflow.
      stackPointer = Math.max(0, stackPointer - 1);
      var $conditionalResults = stackFrame['results'];
      var filteredResults = $.map($conditionalResults, function (val) {
        return val ? val : null;
      });
      return stackFrame['andor'] === 'or'
                ? filteredResults.length > 0
                : filteredResults.length === $conditionalResults.length;
    }

    // Track what has been set/hidden for each target component's elements.
    // Hidden elements must be disabled because if they are required and don't
    // have a value, they will prevent submission due to html5 validation.
    // Each execution of the conditionals adds a temporary class
    // webform-disabled-flag so that elements hidden or set can be disabled and
    // also be prevented from being re-enabled by another conditional (such as a
    // parent fieldset). After processing conditionals, this temporary class
    // must be removed in preparation for the next execution of the
    // conditionals.
    $.each(settings.ruleGroups, function (rgid_key, rule_group) {
      var ruleGroup = settings.ruleGroups[rgid_key];

      // Perform the comparison callback and build the results for this group.
      executionStackInitialize(ruleGroup['andor']);
      $.each(ruleGroup['rules'], function (m, rule) {
        switch (rule['source_type']) {
          case 'component':
            var elementKey = rule['source'];
            var element = $form.find('.' + elementKey)[0];
            var existingValue = settings.values[elementKey] ? settings.values[elementKey] : null;
            executionStackAccumulate(window['Drupal']['webform'][rule.callback](element, existingValue, rule['value']));
            break;

          case 'conditional_start':
            executionStackPush(rule['andor']);
            break;

          case 'conditional_end':
            executionStackAccumulate(executionStackPop());
            break;
        }
      });
      var conditionalResult = executionStackPop();

      $.each(ruleGroup['actions'], function (aid, action) {
        var $target = $form.find('.' + action['target']);
        var actionResult = action['invert'] ? !conditionalResult : conditionalResult;
        switch (action['action']) {
          case 'show':
            var changed = actionResult != Drupal.webform.isVisible($target);
            if (actionResult) {
              $target.find('.webform-conditional-disabled:not(.webform-disabled-flag)')
                .removeClass('webform-conditional-disabled')
                .webformProp('disabled', false);
              $target
                .removeClass('webform-conditional-hidden')
                .show();
              $form.find('.chosen-disabled').prev().trigger('chosen:updated.chosen');
            }
            else {
              $target
                .hide()
                .addClass('webform-conditional-hidden')
                .find(':input')
                  .addClass('webform-conditional-disabled webform-disabled-flag')
                  .webformProp('disabled', true);
            }
            if (changed && $target.is('tr')) {
              Drupal.webform.restripeTable($target.closest('table').first());
            }
            break;

          case 'require':
            var $requiredSpan = $target.find('.form-required, .form-optional').first();
            if (actionResult != $requiredSpan.hasClass('form-required')) {
              var $targetInputElements = $target.find("input:text,textarea,input[type='email'],select,input:radio,input:file");
              // Rather than hide the required tag, remove it so that other
              // jQuery can respond via Drupal behaviors.
              Drupal.detachBehaviors($requiredSpan);
              $targetInputElements
                .webformProp('required', actionResult)
                .toggleClass('required', actionResult);
              if (actionResult) {
                $requiredSpan.replaceWith('<span class="form-required" title="' + Drupal.t('This field is required.') + '">*</span>');
              }
              else {
                $requiredSpan.replaceWith('<span class="form-optional"></span>');
              }
              Drupal.attachBehaviors($requiredSpan);
            }
            break;

          case 'set':
            var $texts = $target.find("input:text,textarea,input[type='email']");
            var $selects = $target.find('select,select option,input:radio,input:checkbox');
            var $markups = $target.filter('.webform-component-markup');
            if (actionResult) {
              var multiple = $.map(action['argument'].split(','), $.trim);
              $selects
                .webformVal(multiple)
                .webformProp('disabled', true)
                  .addClass('webform-disabled-flag');
              $texts
                .val([action['argument']])
                .webformProp('readonly', true)
                .addClass('webform-disabled-flag');
              // A special case is made for markup. It is sanitized with
              // filter_xss_admin on the server. otherwise text() should be used
              // to avoid an XSS vulnerability. text() however would preclude
              // the use of tags like <strong> or <a>.
              $markups.html(action['argument']);
            }
            else {
              $selects.not('.webform-disabled-flag')
                .webformProp('disabled', false);
              $texts.not('.webform-disabled-flag')
                .webformProp('readonly', false);
              // Markup not set? Then restore original markup as provided in
              // the attribute data-webform-markup.
              $markups.each(function () {
                var $this = $(this);
                var original = $this.data('webform-markup');
                if (original !== undefined) {
                  $this.html(original);
                }
              });
            }
            break;
        }
      }); // End look on each action for one conditional.
    }); // End loop on each conditional.

    $form.find('.webform-disabled-flag').removeClass('webform-disabled-flag');
  };

  /**
   * Event handler to prevent propagation of events.
   *
   * Typically click for disabling radio and checkboxes.
   */
  Drupal.webform.stopEvent = function () {
    return false;
  };

  Drupal.webform.conditionalOperatorStringEqual = function (element, existingValue, ruleValue) {
    var returnValue = false;
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    $.each(currentValue, function (n, value) {
      if (value.toLowerCase() === ruleValue.toLowerCase()) {
        returnValue = true;
        return false; // break.
      }
    });
    return returnValue;
  };

  Drupal.webform.conditionalOperatorStringNotEqual = function (element, existingValue, ruleValue) {
    var found = false;
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    $.each(currentValue, function (n, value) {
      if (value.toLowerCase() === ruleValue.toLowerCase()) {
        found = true;
      }
    });
    return !found;
  };

  Drupal.webform.conditionalOperatorStringContains = function (element, existingValue, ruleValue) {
    var returnValue = false;
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    $.each(currentValue, function (n, value) {
      if (value.toLowerCase().indexOf(ruleValue.toLowerCase()) > -1) {
        returnValue = true;
        return false; // break.
      }
    });
    return returnValue;
  };

  Drupal.webform.conditionalOperatorStringDoesNotContain = function (element, existingValue, ruleValue) {
    var found = false;
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    $.each(currentValue, function (n, value) {
      if (value.toLowerCase().indexOf(ruleValue.toLowerCase()) > -1) {
        found = true;
      }
    });
    return !found;
  };

  Drupal.webform.conditionalOperatorStringBeginsWith = function (element, existingValue, ruleValue) {
    var returnValue = false;
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    $.each(currentValue, function (n, value) {
      if (value.toLowerCase().indexOf(ruleValue.toLowerCase()) === 0) {
        returnValue = true;
        return false; // break.
      }
    });
    return returnValue;
  };

  Drupal.webform.conditionalOperatorStringEndsWith = function (element, existingValue, ruleValue) {
    var returnValue = false;
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    $.each(currentValue, function (n, value) {
      if (value.toLowerCase().lastIndexOf(ruleValue.toLowerCase()) === value.length - ruleValue.length) {
        returnValue = true;
        return false; // break.
      }
    });
    return returnValue;
  };

  Drupal.webform.conditionalOperatorStringEmpty = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    var returnValue = true;
    $.each(currentValue, function (n, value) {
      if (value !== '') {
        returnValue = false;
        return false; // break.
      }
    });
    return returnValue;
  };

  Drupal.webform.conditionalOperatorStringNotEmpty = function (element, existingValue, ruleValue) {
    return !Drupal.webform.conditionalOperatorStringEmpty(element, existingValue, ruleValue);
  };

  Drupal.webform.conditionalOperatorSelectGreaterThan = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    return Drupal.webform.compare_select(currentValue[0], ruleValue, element) > 0;
  };

  Drupal.webform.conditionalOperatorSelectGreaterThanEqual = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    var comparison = Drupal.webform.compare_select(currentValue[0], ruleValue, element);
    return comparison > 0 || comparison === 0;
  };

  Drupal.webform.conditionalOperatorSelectLessThan = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    return Drupal.webform.compare_select(currentValue[0], ruleValue, element) < 0;
  };

  Drupal.webform.conditionalOperatorSelectLessThanEqual = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    var comparison = Drupal.webform.compare_select(currentValue[0], ruleValue, element);
    return comparison < 0 || comparison === 0;
  };

  Drupal.webform.conditionalOperatorNumericEqual = function (element, existingValue, ruleValue) {
    // See float comparison: http://php.net/manual/en/language.types.float.php
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    var epsilon = 0.000001;
    // An empty string does not match any number.
    return currentValue[0] === '' ? false : (Math.abs(parseFloat(currentValue[0]) - parseFloat(ruleValue)) < epsilon);
  };

  Drupal.webform.conditionalOperatorNumericNotEqual = function (element, existingValue, ruleValue) {
    // See float comparison: http://php.net/manual/en/language.types.float.php
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    var epsilon = 0.000001;
    // An empty string does not match any number.
    return currentValue[0] === '' ? true : (Math.abs(parseFloat(currentValue[0]) - parseFloat(ruleValue)) >= epsilon);
  };

  Drupal.webform.conditionalOperatorNumericGreaterThan = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    return parseFloat(currentValue[0]) > parseFloat(ruleValue);
  };

  Drupal.webform.conditionalOperatorNumericGreaterThanEqual = function (element, existingValue, ruleValue) {
    return Drupal.webform.conditionalOperatorNumericGreaterThan(element, existingValue, ruleValue) ||
           Drupal.webform.conditionalOperatorNumericEqual(element, existingValue, ruleValue);
  };

  Drupal.webform.conditionalOperatorNumericLessThan = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.stringValue(element, existingValue);
    return parseFloat(currentValue[0]) < parseFloat(ruleValue);
  };

  Drupal.webform.conditionalOperatorNumericLessThanEqual = function (element, existingValue, ruleValue) {
    return Drupal.webform.conditionalOperatorNumericLessThan(element, existingValue, ruleValue) ||
           Drupal.webform.conditionalOperatorNumericEqual(element, existingValue, ruleValue);
  };

  Drupal.webform.conditionalOperatorDateEqual = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.dateValue(element, existingValue);
    return currentValue === ruleValue;
  };

  Drupal.webform.conditionalOperatorDateNotEqual = function (element, existingValue, ruleValue) {
    return !Drupal.webform.conditionalOperatorDateEqual(element, existingValue, ruleValue);
  };

  Drupal.webform.conditionalOperatorDateBefore = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.dateValue(element, existingValue);
    return (currentValue !== false) && currentValue < ruleValue;
  };

  Drupal.webform.conditionalOperatorDateBeforeEqual = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.dateValue(element, existingValue);
    return (currentValue !== false) && (currentValue < ruleValue || currentValue === ruleValue);
  };

  Drupal.webform.conditionalOperatorDateAfter = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.dateValue(element, existingValue);
    return (currentValue !== false) && currentValue > ruleValue;
  };

  Drupal.webform.conditionalOperatorDateAfterEqual = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.dateValue(element, existingValue);
    return (currentValue !== false) && (currentValue > ruleValue || currentValue === ruleValue);
  };

  Drupal.webform.conditionalOperatorTimeEqual = function (element, existingValue, ruleValue) {
    var currentValue = Drupal.webform.timeValue(element, existingValue);
    return currentValue === ruleValue;
  };

  Drupal.webform.conditionalOperatorTimeNotEqual = function (element, existingValue, ruleValue) {
    return !Drupal.webform.conditionalOperatorTimeEqual(element, existingValue, ruleValue);
  };

  Drupal.webform.conditionalOperatorTimeBefore = function (element, existingValue, ruleValue) {
    // Date and time operators intentionally exclusive for "before".
    var currentValue = Drupal.webform.timeValue(element, existingValue);
    return (currentValue !== false) && (currentValue < ruleValue);
  };

  Drupal.webform.conditionalOperatorTimeBeforeEqual = function (element, existingValue, ruleValue) {
    // Date and time operators intentionally exclusive for "before".
    var currentValue = Drupal.webform.timeValue(element, existingValue);
    return (currentValue !== false) && (currentValue < ruleValue || currentValue === ruleValue);
  };

  Drupal.webform.conditionalOperatorTimeAfter = function (element, existingValue, ruleValue) {
    // Date and time operators intentionally inclusive for "after".
    var currentValue = Drupal.webform.timeValue(element, existingValue);
    return (currentValue !== false) && (currentValue > ruleValue);
  };

  Drupal.webform.conditionalOperatorTimeAfterEqual = function (element, existingValue, ruleValue) {
    // Date and time operators intentionally inclusive for "after".
    var currentValue = Drupal.webform.timeValue(element, existingValue);
    return (currentValue !== false) && (currentValue > ruleValue || currentValue === ruleValue);
  };

  /**
   * Utility function to compare values of a select component.
   *
   * @param string a
   *   First select option key to compare
   * @param string b
   *   Second select option key to compare
   * @param array options
   *   Associative array where the a and b are within the keys
   *
   * @return integer based upon position of $a and $b in $options
   *   -N if $a above (<) $b
   *   0 if $a = $b
   *   +N if $a is below (>) $b
   */
  Drupal.webform.compare_select = function (a, b, element) {
    var optionList = [];
    $('option,input:radio,input:checkbox', element).each(function () {
      optionList.push($(this).val());
    });
    var a_position = optionList.indexOf(a);
    var b_position = optionList.indexOf(b);
    return (a_position < 0 || b_position < 0) ? null : a_position - b_position;
  };

  /**
   * Utility to return current visibility.
   *
   * Uses actual visibility, except for hidden components which use the applied
   * disabled class.
   */
  Drupal.webform.isVisible = function ($element) {
    return $element.hasClass('webform-component-hidden')
              ? !$element.find('input').first().hasClass('webform-conditional-disabled')
              : $element.closest('.webform-conditional-hidden').length == 0;
  };

  /**
   * Function to get a string value from a select/radios/text/etc. field.
   */
  Drupal.webform.stringValue = function (element, existingValue) {
    var value = [];
    if (element) {
      var $element = $(element);
      if (Drupal.webform.isVisible($element)) {
        // Checkboxes and radios.
        $element.find('input[type=checkbox]:checked,input[type=radio]:checked').each(function () {
          value.push(this.value);
        });
        // Select lists.
        if (!value.length) {
          var selectValue = $element.find('select').val();
          if (selectValue) {
            if ($.isArray(selectValue)) {
              value = selectValue;
            }
            else {
              value.push(selectValue);
            }
          }
        }
        // Simple text fields. This check is done last so that the select list
        // in select-or-other fields comes before the "other" text field.
        if (!value.length) {
          $element.find('input:not([type=checkbox],[type=radio]),textarea').each(function () {
            value.push(this.value);
          });
        }
      }
    }
    else {
      switch ($.type(existingValue)) {
        case 'array':
          value = existingValue;
          break;

        case 'string':
          value.push(existingValue);
          break;
      }
    }
    return value;
  };

  /**
   * Utility function to calculate a second-based timestamp from a time field.
   */
  Drupal.webform.dateValue = function (element, existingValue) {
    var value = false;
    if (element) {
      var $element = $(element);
      if (Drupal.webform.isVisible($element)) {
        var day = $element.find('[name*=day]').val();
        var month = $element.find('[name*=month]').val();
        var year = $element.find('[name*=year]').val();
        // Months are 0 indexed in JavaScript.
        if (month) {
          month--;
        }
        if (year !== '' && month !== '' && day !== '') {
          value = Date.UTC(year, month, day) / 1000;
        }
      }
    }
    else {
      if ($.type(existingValue) === 'array' && existingValue.length) {
        existingValue = existingValue[0];
      }
      if ($.type(existingValue) === 'string') {
        existingValue = existingValue.split('-');
      }
      if (existingValue.length === 3) {
        value = Date.UTC(existingValue[0], existingValue[1], existingValue[2]) / 1000;
      }
    }
    return value;
  };

  /**
   * Utility function to calculate a millisecond timestamp from a time field.
   */
  Drupal.webform.timeValue = function (element, existingValue) {
    var value = false;
    if (element) {
      var $element = $(element);
      if (Drupal.webform.isVisible($element)) {
        var hour = $element.find('[name*=hour]').val();
        var minute = $element.find('[name*=minute]').val();
        var ampm = $element.find('[name*=ampm]:checked').val();

        // Convert to integers if set.
        hour = (hour === '') ? hour : parseInt(hour);
        minute = (minute === '') ? minute : parseInt(minute);

        if (hour !== '') {
          hour = (hour < 12 && ampm == 'pm') ? hour + 12 : hour;
          hour = (hour === 12 && ampm == 'am') ? 0 : hour;
        }
        if (hour !== '' && minute !== '') {
          value = Date.UTC(1970, 0, 1, hour, minute) / 1000;
        }
      }
    }
    else {
      if ($.type(existingValue) === 'array' && existingValue.length) {
        existingValue = existingValue[0];
      }
      if ($.type(existingValue) === 'string') {
        existingValue = existingValue.split(':');
      }
      if (existingValue.length >= 2) {
        value = Date.UTC(1970, 0, 1, existingValue[0], existingValue[1]) / 1000;
      }
    }
    return value;
  };

  /**
   * Make a prop shim for jQuery < 1.9.
   */
  $.fn.webformProp = $.fn.webformProp || function (name, value) {
    if (value) {
      return $.fn.prop ? this.prop(name, true) : this.attr(name, true);
    }
    else {
      return $.fn.prop ? this.prop(name, false) : this.removeAttr(name);
    }
  };

  /**
   * Make a multi-valued val() function.
   *
   * This is for setting checkboxes, radios, and select elements.
   */
  $.fn.webformVal = function (values) {
    this.each(function () {
      var $this = $(this);
      var value = $this.val();
      var on = $.inArray($this.val(), values) != -1;
      if (this.nodeName == 'OPTION') {
        $this.webformProp('selected', on ? value : false);
      }
      else {
        $this.val(on ? [value] : false);
      }
    });
    return this;
  };

  /**
   * Given a table's DOM element, restripe the odd/even classes.
   */
  Drupal.webform.restripeTable = function (table) {
    // :even and :odd are reversed because jQuery counts from 0 and
    // we count from 1, so we're out of sync.
    // Match immediate children of the parent element to allow nesting.
    $('> tbody > tr, > tr', table)
      .filter(':visible:odd').filter('.odd')
        .removeClass('odd').addClass('even')
      .end().end()
      .filter(':visible:even').filter('.even')
        .removeClass('even').addClass('odd');
  };

})(jQuery);
;
/**
 * @file
 * Webform node form interface enhancements.
 */

(function ($) {

  "use strict";

  Drupal.behaviors.webformAdmin = {};
  Drupal.behaviors.webformAdmin.attach = function (context) {
    // On click or change, make a parent radio button selected.
    Drupal.webform.setActive(context);
    Drupal.webform.updateTemplate(context);
    // Update the template select list upon changing a template.
    // Select all link for file extensions.
    Drupal.webform.selectCheckboxesLink(context);
    // Enhance the normal tableselect.js file to support indentations.
    Drupal.webform.tableSelectIndentation(context);
    // Automatically download exports if available.
    Drupal.webform.downloadExport(context);
    // Enhancements for the conditionals administrative page.
    Drupal.webform.conditionalAdmin(context);
    // Trigger radio/checkbox change when label click automatically selected by
    // browser.
    Drupal.webform.radioLabelAutoClick(context);
  };

  Drupal.webform = Drupal.webform || {};

  Drupal.webform.setActive = function (context) {
    $('.webform-inline-radio', context).click(function (e) {
      $(this).closest('.form-type-radio').find('input[type=radio]').webformProp('checked', true);
    });
    $('.webform-set-active', context).change(function (e) {
      if ($(this).val()) {
        $(this).closest('.form-type-radio').find('input[type=radio]').webformProp('checked', true);
      }
      e.preventDefault();
    });

    // Firefox improperly selects the parent radio button when clicking inside
    // a label that contains an input field. The only way of preventing this
    // currently is to remove the "for" attribute on the label.
    // See https://bugzilla.mozilla.org/show_bug.cgi?id=213519.
    if (navigator.userAgent.match(/Firefox/)) {
      $('.webform-inline-radio', context).removeAttr('for');
    }
  };

  // Update e-mail templates between default and custom.
  Drupal.webform.updateTemplate = function (context) {
    var defaultTemplate = $('#edit-templates-default').val();
    var $templateSelect = $('#webform-template-fieldset select#edit-template-option', context);
    var $templateTextarea = $('#webform-template-fieldset textarea:visible', context);

    var updateTemplateSelect = function () {
      if ($(this).val() == defaultTemplate) {
        $templateSelect.val('default');
      }
      else {
        $templateSelect.val('custom');
      }
    };

    var updateTemplateText = function () {
      if ($(this).val() == 'default' && $templateTextarea.val() != defaultTemplate) {
        if (confirm(Drupal.settings.webform.revertConfirm)) {
          $templateTextarea.val(defaultTemplate);
        }
        else {
          $(this).val('custom');
        }
      }
    };

    $templateTextarea.keyup(updateTemplateSelect);
    $templateSelect.change(updateTemplateText);
  };

  Drupal.webform.selectCheckboxesLink = function (context) {
    function selectCheckboxes() {
      var group = this.className.replace(/.*?webform-select-link-([^ ]*).*/, '$1');
      var $checkboxes = $('.webform-select-group-' + group + ' input[type=checkbox]');
      var reverseCheck = !$checkboxes[0].checked;
      $checkboxes.each(function () {
        this.checked = reverseCheck;
      });
      $checkboxes.trigger('change');
      return false;
    }
    $('a.webform-select-link', context).click(selectCheckboxes);
  };

  Drupal.webform.tableSelectIndentation = function (context) {
    var $tables = $('th.select-all', context).parents('table');
    $tables.find('input.form-checkbox').change(function () {
      var $rows = $(this).parents('table:first').find('tr');
      var row = $(this).parents('tr:first').get(0);
      var rowNumber = $rows.index(row);
      var rowTotal = $rows.size();
      var indentLevel = $(row).find('div.indentation').size();
      for (var n = rowNumber + 1; n < rowTotal; n++) {
        if ($rows.eq(n).find('div.indentation').size() <= indentLevel) {
          break;
        }
        $rows.eq(n).find('input.form-checkbox').webformProp('checked', this.checked);
      }
    });
  };

  /**
   * Attach behaviors for Webform results download page.
   */
  Drupal.webform.downloadExport = function (context) {
    if (context === document && Drupal.settings && Drupal.settings.webformExport && document.cookie.match(/webform_export_info=1/)) {
      window.location = Drupal.settings.webformExport;
      delete Drupal.settings.webformExport;
    }
  };

  /**
   * Attach behaviors for Webform conditional administration.
   */
  Drupal.webform.conditionalAdmin = function (context) {
    var $context = $(context);
    // Bind to the entire form and allow events to bubble-up from elements. This
    // saves a lot of processing when new conditions are added/removed.
    $context.find('#webform-conditionals-ajax:not(.webform-conditional-processed)')
      .addClass('webform-conditional-processed')
      .bind('change', function (e) {

        var $target = $(e.target);
        if ($target.is('.webform-conditional-source select')) {
          Drupal.webform.conditionalSourceChange.apply(e.target);
        }

        if ($target.is('.webform-conditional-operator select')) {
          Drupal.webform.conditionalOperatorChange.apply(e.target);
        }

        if ($target.is('.webform-conditional-andor select')) {
          Drupal.webform.conditionalAndOrChange.apply(e.target);
        }

        if ($target.is('.webform-conditional-action select')) {
          Drupal.webform.conditionalActionChange.apply(e.target);
        }
      });

    // Add event handlers to delete the entire row if the last rule or action is removed.
    $context.find('.webform-conditional-rule-remove:not(.webform-conditional-processed)').bind('click', function () {
      this.webformRemoveClass = '.webform-conditional-rule-remove';
      window.setTimeout($.proxy(Drupal.webform.conditionalRemove, this), 100);
    }).addClass('webform-conditional-processed');
    $context.find('.webform-conditional-action-remove:not(.webform-conditional-processed)').bind('click', function () {
      this.webformRemoveClass = '.webform-conditional-action-remove';
      window.setTimeout($.proxy(Drupal.webform.conditionalRemove, this), 100);
    }).addClass('webform-conditional-processed');

    // Trigger default handlers on the source element, this in turn will trigger
    // the operator handlers.
    $context.find('.webform-conditional-source select').trigger('change');

    // Trigger defaults handlers on the action element.
    $context.find('.webform-conditional-action select').trigger('change');

    // When adding a new table row, make it draggable and hide the weight column.
    if ($context.is('tr.ajax-new-content') && $context.find('.webform-conditional').length === 1) {
      Drupal.tableDrag['webform-conditionals-table'].makeDraggable($context[0]);
      $context.find('.webform-conditional-weight').closest('td').addClass('tabledrag-hide');
      if ($.cookie('Drupal.tableDrag.showWeight') !== '1') {
        Drupal.tableDrag['webform-conditionals-table'].hideColumns();
      }
      $context.removeClass('ajax-new-content');
    }
  };

  /**
   * Event callback for the remove button next to an individual rule.
   */
  Drupal.webform.conditionalRemove = function () {
    // See if there are any remaining rules in this element.
    var rowCount = $(this).parents('.webform-conditional:first').find(this.webformRemoveClass).length;
    if (rowCount <= 1) {
      var $tableRow = $(this).parents('tr:first');
      var $table = $('#webform-conditionals-table');
      if ($tableRow.length && $table.length) {
        $tableRow.remove();
        Drupal.webform.restripeTable($table[0]);
      }
    }
  };

  /**
   * Event callback to update the list of operators after a source change.
   */
  Drupal.webform.conditionalSourceChange = function () {
    var source = $(this).val();
    var dataType = Drupal.settings.webform.conditionalValues.sources[source]['data_type'];
    var $operator = $(this).parents('.webform-conditional-rule:first').find('.webform-conditional-operator select');

    // Store a the original list of all operators for all data types in the select
    // list DOM element.
    if (!$operator[0]['webformConditionalOriginal']) {
      $operator[0]['webformConditionalOriginal'] = $operator[0].innerHTML;
    }

    // Reference the original list to create a new list matching the data type.
    var $originalList = $($operator[0]['webformConditionalOriginal']);
    var $newList = $originalList.filter('optgroup[label=' + dataType + ']');
    var newHTML = $newList[0].innerHTML;

    // Update the options and fire the change event handler on the list to update
    // the value field, only if the options have changed. This avoids resetting
    // existing selections.
    if (newHTML != $operator.html()) {
      $operator.html(newHTML);
    }
    // Trigger the change in case the source component changed from one select
    // component to another.
    $operator.trigger('change');

  };

  /**
   * Event callback to update the value field after an operator change.
   */
  Drupal.webform.conditionalOperatorChange = function () {
    var source = $(this).parents('.webform-conditional-rule:first').find('.webform-conditional-source select').val();
    var dataType = Drupal.settings.webform.conditionalValues.sources[source]['data_type'];
    var operator = $(this).val();
    var $value = $(this).parents('.webform-conditional-rule:first').find('.webform-conditional-value');
    var name = $value.find('input, select, textarea').attr('name');
    var originalValue = false;

    // Given the dataType and operator, we can determine the form key.
    var formKey = Drupal.settings.webform.conditionalValues.operators[dataType][operator]['form'];
    var formSource = typeof Drupal.settings.webform.conditionalValues.forms[formKey] == 'undefined' ? false : source;

    // On initial request, save the default field as printed on the original page.
    if (!$value[0]['webformConditionalOriginal']) {
      $value[0]['webformConditionalOriginal'] = $value[0].innerHTML;
      originalValue = $value.find('input:first').val();
    }
    // On changes to an existing operator, check if the form key is different
    // (and any per-source form, such as a select option list) before replacing
    // the form with an identical version.
    else if ($value[0]['webformConditionalFormKey'] == formKey && $value[0]['webformConditionalFormSource'] == formSource) {
      return;
    }

    // Store the current form key for checking the next time the operator changes.
    $value[0]['webformConditionalFormKey'] = formKey;
    $value[0]['webformConditionalFormSource'] = formSource;

    // If using the default (a textfield), restore the original field.
    if (formKey === 'default') {
      $value[0].innerHTML = $value[0]['webformConditionalOriginal'];
    }
    // If the operator does not need a source value (i.e. is empty), hide it.
    else if (formKey === false) {
      $value[0].innerHTML = '<input type="text" value="" style="display: none;" >';
    }
    // If there is a per-source form for this operator (e.g. option lists), use
    // the specialized value form.
    else if (typeof Drupal.settings.webform.conditionalValues.forms[formKey] == 'object') {
      $value[0].innerHTML = Drupal.settings.webform.conditionalValues.forms[formKey][source];
    }
    // Otherwise all the sources use a generic field (e.g. a text field).
    else {
      $value[0].innerHTML = Drupal.settings.webform.conditionalValues.forms[formKey];
    }

    // Set the name attribute to match the original placeholder field.
    var $firstElement = $value.find('input, select, textarea').filter(':first');
    $firstElement.attr('name', name);

    if (originalValue) {
      $firstElement.val(originalValue);
    }
  };

  /**
   * Event callback to make sure all group and/or operators match.
   */
  Drupal.webform.conditionalAndOrChange = function () {
    var rid = this.getAttribute('data-rid');
    var text = $(this).find('option:selected').text();
    $(this).parents('.webform-conditional:first').find('.webform-conditional-andor div[data-rid="' + rid + '"]').text(text);
  };

  /**
   * Event callback to show argument only for appropriate actions.
   */
  Drupal.webform.conditionalActionChange = function () {
    var action = $(this).val();
    var $argument = $(this).parents('.webform-conditional-condition:first').find('.webform-conditional-argument input');
    var isShown = $argument.is(':visible');
    switch (action) {
      case 'show':
      case 'require':
        if (isShown) {
          $argument.hide();
        }
        break;

      case 'set':
        if (!isShown) {
          $argument.show();
        }
        break;
    }
  };

  /**
   * Triggers a change event when a label receives a click.
   *
   * When the browser automatically selects a radio button when it's label is
   * clicked, the FAPI states jQuery code doesn't receive an event. This function
   * ensures that automatically-selected radio buttons keep in sync with the
   * FAPI states.
   */
  Drupal.webform.radioLabelAutoClick = function (context) {
    $('label').once('webform-label').click(function () {
      $(this).prev('input:radio').change();
    });
  };

  /**
   * Make a prop shim for jQuery < 1.9.
   */
  $.fn.webformProp = $.fn.webformProp || function (name, value) {
    if (value) {
      return $.fn.prop ? this.prop(name, true) : this.attr(name, true);
    }
    else {
      return $.fn.prop ? this.prop(name, false) : this.removeAttr(name);
    }
  };

})(jQuery);
;
