#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("The value of a is %d, \nthe memory address of a is %x. \n", a, &a);
    printf("The value of b is %d, \nthe memory address of b is %x. \n", b, &b);
    
    return 0;
}