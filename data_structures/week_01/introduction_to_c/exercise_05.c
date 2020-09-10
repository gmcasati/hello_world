#include <stdio.h>

void multiplication_table(int value) {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", value, i, value * i);
    }

}

int main() {
    int a;

    a = 2;
    printf("Multiplication table of %d:\n", a);
    multiplication_table(a);

    a = 17;
    printf("Multiplication table of %d:\n", a);
    multiplication_table(a);

    return 0;
}