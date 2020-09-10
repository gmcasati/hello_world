#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 20

void populate_array(int *v, int dim) {
    int i;
    for(i = 0; i < dim; i++) {
        v[i] = rand();
    }
}
void print_array(int *v, int dim) {
    int i;
    for(i = 0; i < dim; i++) {
        printf("%d\n", v[i]);
    }
}
int main() {
    int v1[DIM];
    int *v2;
    int i;

    v2 = (int *) malloc(DIM * sizeof(int));
    srand(time(NULL));
    populate_array(v1, DIM);
    populate_array(v2, DIM);
    // print_array(v1, DIM);
    // printf("\n");
    // print_array(v2, DIM);
    for(i = 0; i < DIM; i++) {
        printf("v1[%2d] = %10d; v2[%2d] = %10d; max[%2d] is %s = %10d\n",
        i, v1[i], i, v2[i], i, v1[i] >= v2[i] ? "v1" : "v2", v1[i] >= v2[i] ? v1[i] : v2[i]);
    }
    free(v2);
    return 0;
}