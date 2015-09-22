os2intra_outdated_flag
======================

Adds a flag type of outdated. Views for admin and block for user.
Adds an expire(datetime) field, which can be added to your contenttypes.
Adds a cronjobs which runs trough nodes which has the expire field, and if they
are expired set the outdated flag on it.

Setup
-----
admin/config/os2intra_outdated_flag
    Disable/Enable cronjob
    Set interval for cronjob. Use [relative php date formats](http://www.php.net/manual/en/datetime.formats.relative.php).


Todo
----

- Make an admin interface to choose which contenttypes has an expire date field.
  It could either be an expire field, or a general setting like how the
  [scheduler](http://drupalcode.org/project/scheduler.git/blob/557611ca1bd0770084eab1af5f3d58654e59a17e:/scheduler.module#l264) does it.
  Needs to automatically add bundles to the flag aswell. https://drupal.org/node/305086#default-flags.

- Make it possible to not depend on field instance.
