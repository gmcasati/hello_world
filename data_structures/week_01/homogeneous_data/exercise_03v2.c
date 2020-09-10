#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 15
#define N_MAX 10

void populate_array(float *v, int dim) {
    int i;

    for(i = 0; i < dim; i++) {
        *v = ((float)(rand() % 10)) / ((float)(1 + rand() % 10));
        v++;
    }
}

void print_array(float *v, int dim, char *name) {
    int i;
    printf("Printing array %s:\n", name);
    for(i = 0; i < DIM; i++) {
        printf("%s[%2d] = %2.2f\n", name, i, *v);
        v++;
    }
}

void sum_arrays(float *v1, float *v2, float *v3, float *res, int dim) {
    int i;
    for(i = 0; i < DIM; i++) {
        *res = *(v1 + i) + *(v2 + DIM - 1 - i) + *(v3 + i);
        res++;  
    }
}

void print_arrays(
    float *v1, 
    char *n1, 
    float *v2, 
    char *n2, 
    float *v3, 
    char *n3, 
    float *res, 
    char *r, 
    int dim) 
{
    int i;
    printf("The result of the sum of %s, %s, %s is in %s...\n",
    n1, n2, n3, r);
    for(i = 0; i < dim; i++) {
        printf("%5s[%2d] + %5s[%2d] + %5s[%2d] = %2.3f + %2.3f + %2.3f = %5s[%2d] = %2.3f\n",
        n1, i, n2, DIM - 1 - i, n3, i, *(v1 + i), *(v2 + DIM - 1 - i), *(v3 + i), r, i, *(res + i));
    }
}
int main() {
    float v1[DIM], v2[DIM], v3[DIM], v4[DIM];

    srand(time(NULL));
    populate_array(v1, DIM);
    populate_array(v2, DIM);
    populate_array(v3, DIM);
    
    print_array(v1, DIM, "v1");
    print_array(v2, DIM, "v2");
    print_array(v3, DIM, "v3");

    sum_arrays(v1, v2, v3, v4, DIM);
    print_arrays(v1, "v1", v2, "v2", v3, "v3", v4, "v4", DIM);

    return 0;
}