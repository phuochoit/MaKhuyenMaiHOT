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
            $arr['phu'][] = $file[$i];
            break;
        case 5:
            $arr['chidan'][] = $file[$i];
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
            $node->status = 0;

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

?>