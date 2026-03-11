#include <stdio.h>
#include <string.h>
#include "student.h"

void input_students(STUDENT students[], int *count) {
    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", count);
    if (*count > MAX_STUDENTS) *count = MAX_STUDENTS;
    for (int i = 0; i < *count; i++) {
        printf("\nStudent #%d:\n", i + 1);
        printf("  Last name and initials: ");
        scanf(" %[^\n]", students[i].lastname);
        printf("  Group number: ");
        scanf("%s", students[i].group);
        printf("  Enter %d grades (space-separated): ", MARKS_COUNT);
        for (int j = 0; j < MARKS_COUNT; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }
}

void calculate_averages(STUDENT students[], int count) {
    for (int i = 0; i < count; i++) {
        int sum = 0;
        for (int j = 0; j < MARKS_COUNT; j++) {
            sum += students[i].marks[j];
        }
        students[i].average = (float)sum / MARKS_COUNT;
    }
}

void sort_by_average(STUDENT students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                STUDENT temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void print_excellent(STUDENT students[], int count) {
    int found = 0;
    printf("\nStudents with grades 4 and 5 only:\n");
    for (int i = 0; i < count; i++) {
        int is_excellent = 1;
        for (int j = 0; j < MARKS_COUNT; j++) {
            if (students[i].marks[j] < 4) {
                is_excellent = 0;
                break;
            }
        }
        if (is_excellent) {
            printf("  %s (group %s), avg: %.2f\n", 
                   students[i].lastname, students[i].group, students[i].average);
            found = 1;
        }
    }
    if (!found) printf("  No such students.\n");
}

void remove_min_average(STUDENT students[], int *count) {
    if (*count == 0) return;
    int min_idx = 0;
    for (int i = 1; i < *count; i++) {
        if (students[i].average < students[min_idx].average) {
            min_idx = i;
        }
    }
    printf("\nRemoving student: %s (avg %.2f)\n",
           students[min_idx].lastname, students[min_idx].average);
    for (int i = min_idx; i < *count - 1; i++) {
        students[i] = students[i + 1];
    }
    (*count)--;
}

void print_all_students(STUDENT students[], int count) {
    printf("\n%-5s %-20s %-8s %-15s\n", "No", "Lastname", "Group", "Average");
    printf("------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-8s %-15.2f\n",
               i + 1, students[i].lastname, students[i].group,
		students[i].average);
    }
}
