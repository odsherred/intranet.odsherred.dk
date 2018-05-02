# Module configuration variables

## `users_cleanup_testing_amount`
Set the limit of users in scope of grabbing loop. 0 by default.

Example: `drush vset users_cleanup_testing_amount 200`

Will limit Grabbing batch process to 2 operations. _Don't forget_ to
delete it using `drush vdel users_cleanup_testing_amount`

## `users_cleanup_max_items`
Max amount of rows matched users. 500 by default. Need to prevent overload of `max_input_vars` php flag. By default it set to 1000.

Example: `drush vset users_cleanup_max_items 1000`
