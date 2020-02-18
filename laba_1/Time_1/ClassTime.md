# Class Time
###
**Class Time** -  класс, представляющий время (часы, минуты и секунды). Данный класс включает в себя следующие операции: добавление часов/минут/секунд, перевод в часы/минуты/секунды и два оператора - сложения и вычитания. 

---
#### private:

| Переменная    | Описание                   |
| ------------- | ------------------------------ |
| `int hours;`  |   Часы                       |
| `int minutes;`| Минуты                         |
| `int seconds` |Секунды                         |

### public:

| Заголовок Функции | Описание                  |
| ------------- | ------------------------------ |
| `Time()`       |Конструктор по умолчанию       |
| `Time(int hours, int minutes, int seconds)`   | Конструктор с параметрами |
| `void set_seconds(int _seconds)`      |Устанавливает секунды     |
| `void set_minutes(int _minutes)`   | Устанавливает минуты     |
| `void set_hours(int _hours)`      |Устанавливает часы      |
| `void set_time(int _hours, int _minutes,int _second)`   |Устанавливает время |
| `int get_minutes()`      |Возвращает минуты      |
| `int get_hours()`   | Возвращает часы   |
| `int get_seconds()`      | Возвращает секунды      |
| `string to_Str()`   | Конвертирует время в строку    |
| `double to_hours()`      | Перевод в часы       |
| `double to_minutes()`   | Перевод в минуты     |
| `double to_seconds()`      | Перевод в секунды      |
| `void overflow_seconds()`   | Проверяет на переполнение в разряде секунд     |
| `void overflow_minutes()`      | Проверяет на переполнение в разряде минут    |
| `void overflow_hours()`   | Проверяет на переполнение в разряде часов  |
| `void add_seconds(int _seconds)`      | Добавляет секунды    |
| `void add_minutes(int _minutes)`   | Добавляет минуты    |
| `void add_hours(int _hours)`      | Добавляет часы      |
| `void add_time(int _hours, int _minutes, int _seconds`   | Добавляет время  |
| `static Time operator +(Time time1, Time time2)`      | Оператор "+"      |
| `static Time operator -(Time time1, Time time2)`   | Оператор "-"     |



