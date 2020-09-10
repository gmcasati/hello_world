#include <stdio.h>

#define DIM 10

int main() {
    int v[DIM] = {0};
    int *p;
    int i;

    p = v;
    *p = 1;
    p++;
    for(i = 1; i < DIM; i++) {
        *p = *(p - 1) * 2;
        p++;
    }

    p = v;
    for(i = 0; i < DIM; i++) {
        printf("At position %d of v, value is v[%d] = %2d - memory address is %x;\n"
        , i, i, *p, p);
        p++;
    }
}