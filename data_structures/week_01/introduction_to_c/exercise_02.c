#include <stdio.h>

void print_up_to_zero(int value) {
    int i;

    if(value > 0) {
        for(i = value; i > 0; i--) {
            printf("%d, ", i);
        }
    } else {
        for(i = value; i < 0; i++) {
            printf("%d, ", i);
        }
    }

    printf("0\n");
    return;
}

int main() {
    int a;
    int b;
    
    a = 6;
    printf("Printing from %d up to zero:\n", a);
    print_up_to_zero(a);
    
    b = -7;
    printf("Printing from %d up to zero:\n", b);
    print_up_to_zero(b);

    return 0;
}