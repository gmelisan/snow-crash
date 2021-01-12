В видео есть подсказка - в их виртуальной машине в домашней директории
лежит файл README. Внутри него текст "FIND this first file who can run
only as flag00...".

$ find / -user flag00 2>/dev/null
/usr/sbin/john
/rofs/usr/sbin/john

Нашлось 2 файла, они одинаковые.

$ cat /usr/sbin/john cdiiddwpgswtgt

В видео есть еще подскзка - использовать сайт dcode.fr. Когда я зашел,
мне в поле для поиска написали "e.g. type caesar". Попробовал, первым
ответом (+15) выдало "nottoohardhere", что и является паролем.
