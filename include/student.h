#ifndef STUDENT_H
#define STUDENT_H

#define MARKS_COUNT 4
#define MAX_STUDENTS 7
#define NAME_LEN 50

/*
 * Структура STUDENT согласно варианту 10
 * Автор: Свибович Никита, группа 10
 */
typedef struct {
    char lastname[NAME_LEN];        // фамилия и инициалы
    char group[10];                  // номер группы
    int marks[MARKS_COUNT];          // успеваемость (4 оценки)
    float average;                   // средний балл
} STUDENT;

/* Прототипы функций */
void input_students(STUDENT students[], int *count);
void calculate_averages(STUDENT students[], int count);
void sort_by_average(STUDENT students[], int count);
void print_excellent(STUDENT students[], int count);
void remove_min_average(STUDENT students[], int *count);
void print_all_students(STUDENT students[], int count);

#endif
