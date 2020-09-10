#include <stdio.h>

int main() {
    int a;
    int *p;

    printf("a = %d, p = %d\n", a, p);

    a = 10;
    *p = 20; // that is possible? No, the program stop to work. We have not allocated memory to host the literal 20.
    printf("a = %d, p = %d\n", a, p);
}