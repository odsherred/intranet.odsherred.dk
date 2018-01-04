<?php
/**
 * User activation form
 */
function os2intra_user_import_activate_form($form_state) {
  $form['employee_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Employee Id'),
  );

  $form['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail adress'),
  );

  $form['birthday'] = array(
    '#type' => 'textfield',
    '#title' => t('Birthdate'),
    '#description' => t('Format: 10/03/1982'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Implements hook_form_validate()
 */
function os2intra_user_import_activate_form_validate($form, &$form_state) {
  // Check if birthdate is valid format
  list($dd,$mm,$yyyy) = explode('/', $form_state['values']['birthday']);
  if(!checkdate($mm, $dd, $yyyy)){
    form_set_error('birthday', t('Birthdate: Invalid format.'));
  }

  // Check if employee id is valid
  $employee_id = (int)$form_state['values']['employee_id'];

  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'user');
  $query->fieldCondition('field_os2intra_employee_id', 'value', $employee_id, 'LIKE');
  $result = array_shift($query->execute());

  if(!$result){
    form_set_error('employee_id', t('Invalid employee id'));
  }
  else {
    $form_state['uid'] = key($result);
    $user = user_load($form_state['uid']);

    if(is_object($user)){
      if($user->mail){
        form_set_error('employee_id', t('Employee already activated'));
      }
      $birthday_field = field_get_items('user', $user, 'field_os2intra_birthday');
      $birthday = strtotime($birthday_field[0]['value']);
      $input_birthday = strtotime($yyyy . '-' . $mm . '-' . $dd);
      if($input_birthday !== $birthday){
        form_set_error('form', 'Please check your input.');
      }
    }

  }

  // Check if email address is valid
  if(!valid_email_address($form_state['values']['mail'])){
    form_set_error('mail', t('Invalid email address.'));
  }
}

/**
 * Implements hook_form_submit()
 */
function os2intra_user_import_activate_form_submit($form, &$form_state) {
  $password = user_password(8);

  $change = array(
    'mail' => $form_state['values']['mail'],
    'pass' => $password
  );
  $user = user_load($form_state['uid']);

  user_save($user, $change);

  if (_user_mail_notify('register_no_approval_required', $user)) {
    drupal_set_message(t('A mail has been sent to: ') . $form_state['values']['mail']);
  }
}

/**
 * Page callback for user activation
 */
function os2intra_user_import_activate() {
  return drupal_get_form('os2intra_user_import_activate_form');
}
