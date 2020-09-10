#include <stdio.h>

#define DIM 10

int main() {
    int v[DIM];
    int *b;
    int i, k;
    
    for(i = 0, k = 55; i < 10; i++, k -= 4) {
        v[i] = k;
    }

    b = v;
    for(i = 0; i < 10; i++) {
        printf("a[%d] = %2d\n", i, b[i]);
    }

    return 0;
}