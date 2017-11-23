<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
$query = db_select('field_data_field_os2intra_employee_id', 't')
    ->fields('t', array('field_os2intra_employee_id_value'));
$query->addExpression('count(*)', 'employee_id_count');
$query->groupBy("t.field_os2intra_employee_id_value");
$query->having('COUNT(*) >= :matches', array(':matches' => 2));
$results = $query->execute();
$count = 0;
foreach ($results as $record) {

  $count++;
  $employee_id = $record->field_os2intra_employee_id_value;

  $query = db_select('field_data_field_os2intra_employee_id', 't');
  $query->condition('t.field_os2intra_employee_id_value', $employee_id);
  $query->addExpression('MAX(t.entity_id)', 'uid');
  $result = $query->execute();

  foreach ($result as $user) {
    user_delete($user->uid);
    print 'deleted user: ' . $user->uid . PHP_EOL;
    error_log('deleted user: ' . $user->uid);
  }
}
var_dump($count);
