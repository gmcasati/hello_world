#include <stdio.h>
#include <stdlib.h>

// correct version of example_06.c
int main() {
    int a;
    int *p;

    printf("a = %d, p = %d\n", a, p);
    
    a = 10;

    p = (int *) malloc(sizeof(int));
    *p = 20; // this is correct 
    
    printf("a = %d, p = %d, *p = %d\n", a, p, *p);
    free(p);
    return 0;
}