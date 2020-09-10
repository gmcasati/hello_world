#include <stdio.h>

int sum(int value_1, int value_2) {
    return value_1 + value_2;
}

int main() {
    int a;
    int b;

    a = 5;
    b = 10;
    printf("a = %d, b = %d \n", a, b);
    printf("a + b = %d \n", sum(a, b));
    return 0;
}