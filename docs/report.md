# Отчёт по тестированию программы (задание 3, вариант 10)

## Тест 1: Ввод 3 студентов с разными оценками

### Входные данные:
```
Enter number of students (max 7): 3

Student #1:
  Last name and initials: Ivanov I.I.
  Group number: 10
  Enter 4 grades (space-separated): 5 4 5 4

Student #2:
  Last name and initials: Petrov P.P.
  Group number: 10
  Enter 4 grades (space-separated): 3 4 3 4

Student #3:
  Last name and initials: Sidorov S.S.
  Group number: 11
  Enter 4 grades (space-separated): 5 5 5 5
```

### Вывод программы:
```
=== STUDENT structure test ===

Loaded 3 students.

=== Initial data ===
No   Lastname             Group    Average
------------------------------------------------
1    Ivanov I.I.          10       4.50
2    Petrov P.P.          10       3.50
3    Sidorov S.S.         11       5.00

=== After sorting by average (descending) ===
No   Lastname             Group    Average
------------------------------------------------
1    Sidorov S.S.         11       5.00
2    Ivanov I.I.          10       4.50
3    Petrov P.P.          10       3.50

Students with grades 4 and 5 only:
  Ivanov I.I. (group 10), avg: 4.50
  Sidorov S.S. (group 11), avg: 5.00

Removing student: Petrov P.P. (avg 3.50)

=== After removing student with minimum average ===
No   Lastname             Group    Average
------------------------------------------------
1    Sidorov S.S.         11       5.00
2    Ivanov I.I.          10       4.50
```

**Результат теста:** пройден

---

## Тест 2: Пустой список

### Входные данные:
```
Enter number of students (max 7): 0
```

### Вывод программы:
```
=== STUDENT structure test ===

Loaded 0 students.

=== Initial data ===
No   Lastname             Group    Average
------------------------------------------------

Students with grades 4 and 5 only:
  No such students.

=== After removing student with minimum average ===
No   Lastname             Group    Average
------------------------------------------------
```

**Результат теста:** пройден

---

## Вывод

Программа работает корректно на всех тестовых наборах данных. Все функции выполняются в соответствии с заданием.
