Запускаем strings на файл level07. Анализируем, находим следующие строчки:

asprintf
getenv
system
LOGNAME
/bin/echo %s

Т.к. программа при запуске выводит наш логин, логично предполагаем,
что внутри идет вызов system() на строку, созданную через
printf("/bin/echo %s", getenv("LOGNAME")).
Поэтому пробуем поменять переменную LOGNAME на ";getflag".
