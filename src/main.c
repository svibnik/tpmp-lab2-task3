#include <stdio.h>
#include "student.h"

int main() {
    STUDENT students[MAX_STUDENTS];
    int count = 0;
    printf("=== STUDENT structure test ===\n\n");
    input_students(students, &count);
    calculate_averages(students, count);
    printf("\n=== Initial data ===\n");
    print_all_students(students, count);
    sort_by_average(students, count);
    printf("\n=== After sorting by average (descending) ===\n");
    print_all_students(students, count);
    print_excellent(students, count);
    remove_min_average(students, &count);
    printf("\n=== After removing student with minimum average ===\n");
    print_all_students(students, count);
    return 0;
}

