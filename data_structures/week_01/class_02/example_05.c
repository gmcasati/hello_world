#include <stdio.h>

int main() {
    int v1, v2;
    char c1, c2;
    
    printf("v1 = %d; v2 = %d\n", v1, v2);
    printf("c1 (int) = %d, c1 (char) = %c; c2 (int) = %d, c2 (char) = %c\n", c1, c1, c2, c2);

    v1 = 10;
    v2 = 20;
    c1 = 'm';
    c2 = '9';

    printf("v1 = %d; v2 = %d\n", v1, v2);
    printf("c1 (int) = %d, c1 (char) = %c; c2 (int) = %d, c2 (char) = %c\n", c1, c1, c2, c2);

    printf("The sum of v1 = %d with v2 = %d is: v1 + v2 = %d\n", v1, v2, v1 + v2);
    printf("The sum of c1 = %d with c2 = %d is: c1 + c2 = %d\n", c1, c2, c1 + c2);
    printf("The sum of c1 = %c with c2 = %c is: c1 + c2 = %c\n", c1, c2, c1 + c2);

    return 0;
}