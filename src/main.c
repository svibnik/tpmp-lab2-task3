#include <stdio.h>
#include "student.h"

int main() {
    STUDENT students[MAX_STUDENTS];
    int count = 0;
    printf("=== Работа со структурой STUDENT ===\n\n");
    input_students(students, &count);
    calculate_averages(students, count);
    printf("\n=== Исходные данные ===\n");
    print_all_students(students, count);
    sort_by_average(students, count);
    printf("\n=== После сортировки по убыванию среднего балла ===\n");
    print_all_students(students, count);
    print_excellent(students, count);
    remove_min_average(students, &count);
    printf("\n=== После удаления студента с минимальным баллом ===\n");
    print_all_students(students, count);
    return 0;
}
