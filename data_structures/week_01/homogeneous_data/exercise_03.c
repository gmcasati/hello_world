#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 15

void populate_array(float v[DIM]) {
    int i;
    
    for(i = 0; i < DIM; i++) {
        v[i] = ((float)(rand() % 10)) / ((float)(1 + rand() % 10));
    }
}

void print_array(float v[DIM], char name[10]) {
    int i;
    printf("Printing array %s:\n", name);
    for(i = 0; i < DIM; i++) {
        printf("%s[%2d] = %2.2f\n", name, i, v[i]);
    }
}

void sum_arrays(float v1[DIM], float v2[DIM], float v3[DIM], float res[DIM]) {
    int i;

    for(i = 0; i < DIM; i++) {
        res[i] = v1[i] + v2[DIM - 1 - i] + v3[i];
    }
}

void print_arrays(
    float v1[DIM], 
    char n1[10], 
    float v2[DIM], 
    char n2[10], 
    float v3[DIM], 
    char n3[10], 
    float res[DIM], 
    char nr[10]) 
{
    int i;

    for(i = 0; i < DIM; i++) {
        printf("%5s[%2d] + %5s[%2d] + %5s[%2d] = %2.2f + %2.2f + %2.2f = %5s[%2d] = %2.2f\n",
        n1, i, n2, DIM - 1 - i, n3, i, v1[i], v2[DIM - 1 - i], v3[i], nr, i, res[i]);
    }
}
int main() {
    float v1[DIM], v2[DIM], v3[DIM], v4[DIM];
    
    srand(time(NULL));
    populate_array(v1);
    populate_array(v2);
    populate_array(v3);
    
    print_array(v1, "v1");
    print_array(v2, "v2");
    print_array(v3, "v3");
    sum_arrays(v1, v2, v3, v4);
    printf("The result of the sum of v1, v2, v3 is in v4...\n");
    print_arrays(v1, "v1", v2, "v2", v3, "v3", v4, "v4");

    return 0;
}