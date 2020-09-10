#include <stdio.h>
#define DIM 10

int main() {
    int v[DIM] = {0};
    int i;
    
    v[0] = 1;
    for(i = 1; i < DIM; i++) {
        v[i] = 2 * v[i - 1];
    }

    for(i = 0; i < DIM; i++)
        printf("At position %d of v, value is v[%d] = %2d - memory address is %x;\n"
        ,i, i, v[i], &v[i]);
    
    return 0;
}