Key Activity On-Screen display
==============================

Project kaos delivers a kernel module and X11 application written in Qt4.
Together they allow tracking keys and buttons pressed by the user in input
devices, especially keyboard and mouse. Key activity is shown using simple
and opaque OSD in the top-right corner of the screen.

At the same time it is a jprobe applicability/usefulness proof-of-concept.
Kprobe dependency can be easily removed by writing own input handler and it
will be done in future.

**USE AT YOUR OWN RISK! NO WARRANTY!**


Requirements
------------

- Linux 2.6 kernel with following features built-in:
  * Debug Filesystem - `CONFIG_DEBUG_FS=y`
  * Generic input layer - `CONFIG_INPUT=y`
  * Kprobes - `CONFIG_KPROBES=y`
  * Kernel->user space relay support - `CONFIG_RELAY=y`
- Qt 4


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


Bugs
----

If you find any bug, then please create new issue in [GitHub][1] and
describe it there.

  [1]: http://github.com/przemoc/kaos/issues
