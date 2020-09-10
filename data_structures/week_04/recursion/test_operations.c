#include <stdio.h>
#include "operations.h"

int main() {
    int n;
    
    n = -29;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 0;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 1;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 2;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 3;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 4;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 5;
    printf("Factorial of %d: %d.\n", n, factorial(n));

    n = 6;
    printf("Factorial of %d: %d.\n", n, factorial(n));
    
    printf("\n");
    n = -1;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 0;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 1;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 2;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 3;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 4;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 5;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));

    n = 6;
    printf("Fibonacci of %d: %d.\n", n, fibonacci(n));
    
    return 0;
}