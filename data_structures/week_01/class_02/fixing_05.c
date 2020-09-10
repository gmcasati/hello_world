#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int *p, *q;

    a = 10;
    b = 15;

    printf("a = %d, b = %d\n", a, b);

    p = &a;
    q = &b;

    printf("p = %d, b = %d", *p, *q);

    return 0;
}