#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int *c;
    int *d;

    c = &a;
    d = &b;

    printf("Value of a is %d, Value of b is %d, Value of c is %d, Value of d is %d\n",
    a, b, c, d);
    printf("Value of a is %d, Value of b is %d, Value of c is %d, Value of d is %d\n",
    a, b, *c, *d);

    c = d;

    printf("Value of a is %d, Value of b is %d, Value of c is %d, Value of d is %d\n",
    a, b, c, d);
    printf("Value of a is %d, Value of b is %d, Value of c is %d, Value of d is %d\n",
    a, b, *c, *d);

    return 0;
}