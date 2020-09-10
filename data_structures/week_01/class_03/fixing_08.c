#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int main() {
    int a[DIM];
    int *p;
    int i;

    p = (int*) malloc(DIM * sizeof(int));
    for(i = 1; i <= DIM; i++) {
        *p = 10 * i;
        p++;
    }
    
    p -= DIM;
    for(i = 0; i < DIM; i++) {
        a[i] = *p;
        p++;
    }

    p -= DIM;
    for(i = 0; i < DIM; i++) {
        printf("a[%d] = %2d, p[%d] = %d\n", i, a[i], i, p[i]);
    }
    
    free(p);
    
    return 0;
}