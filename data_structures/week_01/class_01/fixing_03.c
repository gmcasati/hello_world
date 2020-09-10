#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float d;
    float e;

    a = 123.25;
    b = 3.141592;
    c = 1.27;
    d = 1.931;
    e = 1.010101;

    printf("%4.2f  %4.2f  %4.2f  %4.2f  %4.2f  %4.2f  \n",
    a, b, c, d, e, (a / b / c / d / e));

    return 0;
}