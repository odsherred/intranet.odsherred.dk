<?php

$tree = taxonomy_get_tree(2);
foreach($tree as $tid => $value){
  if($value->tid > 2000){  
    error_log($value->tid);
    taxonomy_term_delete($value->tid);
  }
}
