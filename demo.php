<?php
    $arr = array();

    global $base_url;
    $file = json_decode(file_get_contents($base_url.'/NoticeBoard.json'));

    for ($i=0; $i < count($file); $i++) { 
        switch ($file[$i]->loai_bien ) {
        case 1:
            $arr['cam'][] = $file[$i];
            break;
        case 2:
            $arr['nguyhiem'][] = $file[$i];
            break;
        case 3:
            $arr['hieulenh'][] = $file[$i];
            break;
        case 4:
            $arr['chidan'][] = $file[$i];
            break;
        case 5:
            $arr['phu'][] = $file[$i];
            break;
        case 6:
            $arr['vachkeduong'][] = $file[$i];
            break;
        }
    }
    $url = $base_url.'/images/';

    foreach ($arr as $key => $val) {
        $node = new stdClass();
        $node->type = 'notice_board';
        $node->uid = 1;
        $node->created = time();
        $node->changed = $node->created;
        $node->promote = $node->created;
        $node->sticky  = 0;
        $node->language = LANGUAGE_NONE;
        $node->comment = 0;
        $node->status = 1;

        switch ($key) {
            case 'cam':
                $title = 'Biển báo cấm';
            break;
            case 'nguyhiem':
                $title = 'Biển báo nguy hiểm';
            break;
            case 'hieulenh':
                $title = 'Biển hiệu lệnh';
            break;
            case 'chidan':
                $title = 'Biển chỉ dẫn';
            break;
            case 'phu':
                $title = 'Biển phụ';
            break;  
            case 'vachkeduong':
                $title = 'Vạch kẻ đường';
            break;  
            
        }
        $node->title = $title;
        
        foreach ($val as $k => $v) {
            $field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_notice_board'));
            $field_collection_item->setHostEntity('node', $node);
            $file_info = system_retrieve_file($url.$v->anh.'.jpg', 'public://', TRUE,FILE_EXISTS_REPLACE);
            $field_collection_item->field_image['und'][0]['fid'] = $file_info->fid;
            $field_collection_item->field_notice_board_name['und'][0]['value'] = $v->ten_loi;
            $field_collection_item->field_notice_board_body['und'][0]['value'] =$v->noi_dung;
            $field_collection_item->save();
        }
       
        node_save($node);
    }

	
	
	
	// update  field collection
	// foreach($node->field_notice_board['und'] as $k => $val){
		// $field_collection_item = entity_load_single('field_collection_item',$val['value']);
		// $field_collection_item->field_notice_board_name['und'][0]['value'] = "new field_notice_board_name ".$val['value'];
		// $field_collection_item->field_notice_board_body['und'][0]['value'] = "new field_notice_board_body ".$val['value'];
		// $field_collection_item->field_image['und'][0]['fid'] = "2";
		// $field_collection_item->save();
	// }
	
	// create field collection
	// $field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_notice_board'));
	// $field_collection_item->setHostEntity('node', $node);
	// $field_collection_item->field_notice_board_name['und'][0]['value'] = "new field_notice_board_name";
	// $field_collection_item->field_notice_board_body['und'][0]['value'] = "new field_notice_board_body";
	// $field_collection_item->field_image['und'][0]['fid'] = "2";
	// $field_collection_item->save();

	global $base_url;
    $arr = array();
    $file = json_decode(file_get_contents($base_url.'/XuPhat.json'));

    foreach ($file as $key => $value) {
        $node = new stdClass();
        $node->type = 'violation_error';
        $node->uid = 1;
        $node->created = time();
        $node->changed = $node->created;
        $node->promote = $node->created;
        $node->sticky  = 0;
        $node->language = LANGUAGE_NONE;
        $node->comment = 0;
        $node->status = 1;

        $node->title = truncate_utf8($value->ten_loi,100);
        $node->field_sub_title['und'][0]['value'] = $value->ten_loi;
        
        $node->body['und'][0]['value'] = $value->noi_dung;
        $node->body['und'][0]['format'] = 'full_html';
        $node->field_fines['und'][0]['value'] = $value->muc_phat;
        $node->field_rules['und'][0]['value'] = $value->dieu_khoan;
        $node->field_other_penalties['und'][0]['value'] = $value->c12Other_Penalties;
        $node->field_remedial_measures['und'][0]['value'] = $value->c11Remedial_Measures;
        $node->field_the_violators['und'][0]['value'] = $value->doi_tuong;
        $node->field_additional_penalties['und'][0]['value'] = $value->phat_bo_sung;
        
        switch ($value->loai_xe) {
            case 2:
            case 66:
            case 4:
                $node->field_vehicle_type['und'][0]['value'] = 0;
                break;
            case 1:
                $node->field_vehicle_type['und'][0]['value'] = 1;
                break;
            case 22:
                $node->field_vehicle_type['und'][0]['value'] = 2;
                break;
            case 33:
                $node->field_vehicle_type['und'][0]['value'] = 3;
                break;
            case 16: 
                $node->field_vehicle_type['und'][0]['value'] = 4;
                break;
            case 75: 
            case 11: 
            case 111:
            case 65:
            case 8:
            case 72:
            case 5:
            case 71:
            case 44:
            case 33:
            case 96:
            case 64:
            case 32:
            case 24:
                $node->field_vehicle_type['und'][0]['value'] = 5;
                break;
        }

        node_save($node);
    }

?>