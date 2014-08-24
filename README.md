Key Activity On-Screen display
==============================

Project kaos delivers a kernel module and X11 application written in Qt 4/5.
Together they allow tracking keys and buttons pressed by the user in input
devices, especially keyboard and mouse. Key activity is shown using simple
and opaque OSD in the top-right corner of the screen.

At the same time it is a jprobe applicability/usefulness proof-of-concept.

**USE AT YOUR OWN RISK! NO WARRANTY!**


Requirements
------------

- Linux kernel (>= 2.6.26) with following features enabled:
  * Debug Filesystem                 - `CONFIG_DEBUG_FS`
  * Generic input layer              - `CONFIG_INPUT`
  * Kprobes                          - `CONFIG_KPROBES`
  * Kernel->user space relay support - `CONFIG_RELAY`
- Qt 4 or 5


Usage
-----

Build kernel module and application:

    make

Mount debugfs if it is not already mounted:

    sudo mount -t debugfs none /sys/kernel/debug

Load module:

    sudo make load

Start application:

    make start [DEBUGFS_DIR=/path/to/debugfs]

Providing DEBUGFS_DIR is required only if it is not `/sys/kernel/debug`.

If debugfs directory permissions allow access only for super user,
then prepend above command with `sudo`.


Bugs
----

If you find any bug, then please create new issue in [GitHub][1] and
describe it there.

  [1]: http://github.com/przemoc/kaos/issues
