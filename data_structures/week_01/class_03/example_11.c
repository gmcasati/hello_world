#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int main() {
    int a[DIM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *b;
    int i;

    b = (int *) malloc(DIM * sizeof(int));
    for(i = 0; i < DIM; i++) {
        *b = a[i] + 1;
        b++;
    } 

    b -= DIM;
    for(i = 0; i < DIM; i++, b++) {
        printf("a[%d] = %3d, b[%d] = %3d\n", i, a[i], i, *b);
    }
    b -= DIM;
    printf("%x, %d\n", b, *b);
    free(b);
    printf("%x, %d\n", b, *b);
    return 0;
}