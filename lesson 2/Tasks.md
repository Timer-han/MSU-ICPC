﻿# A. Скобки

ограничение по времени на тест 1 секунда

ограничение по памяти на тест 256 мегабайт

стандартный ввод

стандартный вывод

Требуется определить, является ли правильной данная последовательность круглых, квадратных и фигурных скобок. Если последовательность является правильной, то требуется вывести массив, у которого на i-той позиции стоит индекс парной скобки для скобки на i-той позиции. Если последовательность не является правильной, то требуется вывести число -1.



Входные данные

Строка s длины не более 105, состоящая из символов (,[,{,),],}.



Выходные данные

Если последовательность является правильной, выведите массив, у которого на i-той позиции стоит индекс парной скобки для скобки на i-той позиции. Если последовательность не является правильной, выведите -1.



Примеры

входные данные

()

выходные данные

1 0

входные данные

}[

выходные данные

-1





# B. Стек с операцией

ограничение по времени на тест 1 секунда

ограничение по памяти на тест 256 мегабайт

стандартный ввод

стандартный вывод

Реализуйте стек с поддержкой максимума.



Входные данные

Первая строка содержит число запросов q (1≤q≤4⋅105).



Каждая из следующих q строк задает запрос в одном из форматов: push v (0≤v≤105), pop или max.



Выходные данные

На каждый запрос max выведите максимум в стеке.



Примеры

входные данные

10

push 2

max

push 3

max

push 9

max

pop

max

pop

max

выходные данные

2

3

9

3

2

входные данные

5

push 1

push 2

max

pop

max

выходные данные

2

1





# C. Обратная польская нотация

ограничение по времени на тест 1 секунда

ограничение по памяти на тест 256 мегабайт

стандартный ввод

стандартный вывод

Обратной польской нотацией называется принцип записи арифметического выражения, указывающий на порядок выполнения арифметических операций.



По правилам обратной польской нотации сначала записываются два числа, над которыми будет выполнена операция, а затем сама операция.



Входные данные

Строка с выражением в обратной польской нотации (все числа целые положительные).



Выходные данные

Результат выражения.



Пример

входные данные

1 2 + 3 4 + *

выходные данные

21

Примечание

В примере из условия сначала выполняется сложение чисел 1 и 2, затем сложение чисел 3 и 4, а потом берется произведение полученных результатов, то есть данное выражение можно записать как (1 + 2) * (3 + 4).



# D. Stack Sorting

ограничение по времени на тест 1 секунда

ограничение по памяти на тест 256 мегабайт

стандартный ввод

стандартный вывод

Given two stacks A and B. Initially stack A contains integers from 1 to n in some order, and stack B is empty. You can make two types of operations:



push: take the top element from the stack A and move it into stack B,

pop: take the top element from the stack B and print it to the output stream.

Your task is to print all the elements of stack A in sorted order.



Входные данные

The first line contains integer n (1 ≤ n ≤ 2000). The second line contains n integers, elements in stack A, the leftmost element being the top of the stack.



Выходные данные

Print the sequence of operations that print all elements in sorted order. If there is no solution, print impossible.



Примеры

входные данные

5

5 3 1 2 4

выходные данные

push

push

push

pop

push

pop

pop

push

pop

pop

входные данные

3

2 3 1

выходные данные

impossible





# E. Игра с деком

ограничение по времени на тест 6 s.

ограничение по памяти на тест 256 MB

вводstandard input

выводstandard output

Маленький Вова играет с деком. Он построил дек, добавил в него с конца n элементов, то есть i-й элемент с начала равен ai (i = 1,2,…,n). После этого он последовательно берет из дека два первых (то есть крайних слева) элемента (назовем их A и B соответственно) и делает следующее: если A>B, то он A записывает в начало, а B записывает в конец дека, иначе он записывает в начало B, а A записывает в конец дека. Назовем эту последовательность действий операцией.



Например если дек был [2,3,4,5,1], после операции он запишет B=3 в начало и A=2 в конец, таким образом он получит [3,4,5,1,2].



Преподаватель курса, увидев увлеченного своим делом Вову, подошел к нему и задал ему q вопросов. Каждый вопрос состоит из единственного числа mj (j=1,2,…,q). Требуется для каждого вопроса ответить какие два элемента он вытащит на mj-й операции.



Обратите внимание, что запросы независимы, а числа A и B для каждого из запросов нужно вывести в том порядке, в котором они будут вытащены из дека.



Входные данные

Первая строка содержит два целых числа n и q (2≤n≤105, 0≤q≤3⋅105) — количество элементов в деке и количество вопросов преподавателя соответственно. Вторая строка содержит n целых чисел a1, a2, ..., an, где ai (0≤ai≤109) — элемент дека в i-й позиции. Следующие q строк содержат по одному числу, обозначающее mj (1≤mj≤1018).



Выходные данные

Для каждого вопроса преподавателя выведите два числа A и B — числа, которые вытащит Вова из дека на mj-й операции.



Примеры

входные данные

5 3

1 2 3 4 5

1

2

10

выходные данные

1 2

2 3

5 2

входные данные

2 0

0 0

выходные данные

Примечание

Рассмотрим все 10 шагов для первого теста подробно:

[1,2,3,4,5] — на первой операции A и B равны соответственно 1 и 2.

Значит, 2 мы запишем в начало дека, а 1 — в конец.



Получим следующее состояние дека: [2,3,4,5,1].



[2,3,4,5,1]⇒A=2,B=3.

[3,4,5,1,2]

[4,5,1,2,3]

[5,1,2,3,4]

[5,2,3,4,1]

[5,3,4,1,2]

[5,4,1,2,3]

[5,1,2,3,4]

[5,2,3,4,1]⇒A=5,B=2.





# F. NEO

ограничение по времени на тест 1 секунда

ограничение по памяти на тест 64 мегабайта

стандартный ввод

стандартный вывод

Обозначим через Ai, j элемент иматрицы A находится в i-й строке и j-м столбце. Будем говорить, что матрица A клевая, если выполняется свойство:





где r обозначает число строк и s число столбцов матрицы A.



Кроме того, будем говорить, что матрица очень клевая, если каждая из ее подматриц из не менее двух строк и двух столбцов клевая.



Ваша задача — найти наибольшее число элементов, которые содержатся в очень клевой подматрице данной матрицы.



Входные данные

Первая строка входного файла содержит два целых числа R, S (2 ≤ R, S ≤ 1 000), которые представляют собой размеры матрицы.



Каждая из следующих R строк содержит S целых чисел, которые представляют элементы матрицы. Элементы матрицы будут целыми числами из интервала [ - 106, 106].



Выходные данные

Первая и единственная строка выходного файла должна содержать максимальное количество элементов, которые содержатся в очень клевой подматрице заданной матрицы. Если очень клевой подматрицы нет, выведите 0.



Примеры

входные данные

3 3

1 4 10

5 2 6

11 1 3

выходные данные

9

входные данные

3 3

1 3 1

2 1 2

1 1 1

выходные данные

4

входные данные

5 6

1 1 4 0 3 3

4 4 9 7 11 13

-3 -1 4 2 8 11

1 5 9 5 9 10

4 8 10 5 8 8

выходные данные

