#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    
    p = &a;
    printf("Value of a is: %d, Address of a is: %x; \n", a, &a);
    printf("Value addressed from p is: %d, Value of p is: %x. \n", *p, p);

    return 0;
}