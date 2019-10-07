# Камилла и язык программирования WR

Ограничение | Значение
--- | ---
Ограничение времени | 0.5 секунд
Ограничение памяти | 256Mb
Ввод | стандартный ввод или input.txt
Вывод | стандартный вывод или output.txt

Маленькая девочка Камилла любит программировать. Она придумала и реализовала свой собственный язык программирования.

Этот язык называется "WR", и он работает с wr-строками – строками, состоящими только из букв "w" и "r". Программа на этом языке – это wr-строка, результат работы программы также является wr-строкой. В языке WR всего две команды. Команда записи (write) начинается с маленькой буквы "w" и состоит из двух символов: первый из них – сама буква "w", а второй – буква, которую нужно вывести. Команда повтора (repeat) состоит из одного символа – маленькой буквы "r" – и означает, что нужно один раз повторить выполнение предыдущей команды.

При выполнении программа разбивается на команды слева направо, а затем команды выполняются последовательно. Если что-то из этого невозможно, вся программа считается некорректной. Это происходит в двух случаях:

1. Очередная команда начинается с буквы "w", но второго символа в этой команде нет, так как эта буква "w" – последняя буква программы.

2. Команда повтора – первая в программе, поэтому она не может повторить предыдущую команду. Результат работы некорректной программы – пустая строка.

Камилле нравится, что на её языке можно написать программу, которая выведет другую программу, которую можно тоже выполнить и получить третью программу, и так далее. Девочка хочет последовательно выписать все программы, которые получились при таком процессе. Сначала она выбрала некоторую исходную wr-строку и объявила её исполняемой. После этого Камилла выполняет следующий алгоритм:

1. Выписывает исполняемую строку.

2. В результате работы исполняемой строки как программы на языке WR получает новую строку.

3. Если полученная новая строка пуста, заканчивает работу, а иначе объявляет эту новую строку исполняемой и вновь переходит к шагу 1.

По заданной исходной wr-строке выясните, какие строки и в каком порядке выписала Камилла.

### Формат ввода
В единственной строке ввода задана wr-строка – последовательность букв "w" и "r". Она содержит от 1 до 100 букв и не содержит пробелов.

### Формат вывода
Выведите все строки, которые выписала Камилла, в порядке их выписывания.

## Пример 1
Ввод | Вывод
--- | ---
wwrrwrr | <ul><li>wwrrwrr</li><li>wwwrr</li><li>wrr</li><li>rr</li></ul>

## Пример 2
Ввод | Вывод
--- | ---
wwrwr | <ul><li>wwrwr</li><li>wwr</li><li>ww</li><li>w</li></ul>
