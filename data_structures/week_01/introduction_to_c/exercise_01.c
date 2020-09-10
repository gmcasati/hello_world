#include <stdio.h>

int sum_of_sequences(int begin, int quantity) {
    int i;
    int tot = 0;
    
    if(quantity < 0)
        return 0;
    
    for(i = begin; i < (begin + quantity); i++) {
        tot += i;
    }

    return tot;
}

int main() {
    int b = 5;
    int q = 10;

    printf("b = %d, q = %d, sum = %d \n", b, q, sum_of_sequences(b, q));

    return 0;
}