Здесь я уже подменил getuid() на свой.

$ cd /tmp
$ gcc -shared -o fake_getuid.so fake_getuid.c
$ cd
$ export LD_PRELOAD=/tmp/fake_getuid.so
$ id
uid=4242 gid=2013(level13) euid=2013(level13) groups=2013(level13),100(users)

По неизвестной мне причине если запустить ./level13 ошибка останется, однако
если запустить его под strace, то все работает как надо.

$ strace ./level13 2> /dev/null
your token is 2A31L79asukciNyi8uppkEuSx
