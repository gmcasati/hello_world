#include <stdio.h>
#include <stdlib.h>
#include "example_16.h"

struct Student_ {
    int registrationID;
    float grades[3];
};

Student* create_student(int registrationID) {
    struct Student_* s = (struct Student_*) malloc(sizeof(struct Student_));
    if(s != NULL) {
        s->registrationID = registrationID; 
        s->grades[0] = 0;
        s->grades[1] = 0;
        s->grades[2] = 0;
    }
    return s;
}

void define_grades(Student* student, float g1, float g2, float g3) {
    student->grades[0] = g1;
    student->grades[1] = g2;
    student->grades[2] = g3;
}

void define_grade(Student* student, float grade, int sequence) {
    if(sequence < 1 || sequence > 3) {
        printf("Sequence value out of range: sequence is a value between 1 and 3");
    } else {
        student->grades[sequence - 1] = grade;
    }
}

float get_average(Student* student) {
    int i;
    float sum = 0;
    for(i = 0; i < 3; i++) {
        sum += student->grades[i];
    }
    return sum / 3.0;
}

void get_grades(Student* student, float *g1, float *g2, float *g3, float *average) {
    *g1 = student->grades[0];
    *g2 = student->grades[1];
    *g3 = student->grades[2];
    *average = get_average(student);
}

void free_student(Student* student) {
    free(student);
}