int factorial(int n) {
    int i, fact;
    if(n < 0) return -1;
    for(i = 1, fact = 1; i <= n; i++) {
        fact *= i;
    }  
    return fact;
}

int fibonacci(int n) {
    int i, fib, fib_0, fib_1;
    if(n < 0) return -1;
    if(n == 0) return 0;
    if(n == 1) return 1;

    fib_0 = 0;
    fib_1 = 1;
    for(i = 2; i <= n; i++) {
        fib = fib_0 + fib_1;
        fib_0 = fib_1;
        fib_1 = fib;
    }
    return fib;
}