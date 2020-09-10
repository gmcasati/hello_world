#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];
    int *c;
    int i;

    for(i = 21; i < 31; i++)
        b[i-21] = i;

    c = b;
    for(i = 0; i < 10; i++) 
        printf("a[%d] = %2d, b[%d] = %2d, c[%d] = %2d\n", 
        i, a[i], i, b[i], i, c[i]);

    return 0;
}