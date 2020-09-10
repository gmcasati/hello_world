#include <stdio.h>
#include "example_16.h"

int main() {
    Student *student;
    float grade1, grade2, grade3, average;

    student = create_student(1000);
    define_grades(student, 9.5, 8.3, 10);
    get_grades(student, &grade1, &grade2, &grade3, &average);
    free_student(student);

    printf("Grade 1 is : %.2f\n", grade1);
    printf("Grade 2 is : %.2f\n", grade2);
    printf("Grade 3 is : %.2f\n", grade3);
    printf("Average is : %.2f\n", average);
    return 0;
}