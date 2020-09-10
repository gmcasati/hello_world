#include <stdio.h>

int main() {
    int a;
    int *p;

    printf("a = %d, p = %d\n", a, p);

    a = 10;
    p = 20; // that is possible? possible, but dangerous. we are telling to pointing the address 20 of memory
    // a warning is thrown by the compiler
    printf("a = %d, p = %d\n", a, p);
}