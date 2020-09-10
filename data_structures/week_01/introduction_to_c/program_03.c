#include <stdio.h>

int sequence(int starting_value, int quantity) {
    if(quantity < 0)
        return 0;
    
    int i;
    int total = 0;
    
    for(i = starting_value; i < (starting_value + quantity); i++) {
        if(i % 2 == 0) {
            total *= i;
        } else {
            total += i;
        }
    }
    
    return total;
}

int main() {
    int sv;
    int q;
    sv = 7;
    q = 15;
    printf("sv = %d, q = %d \n", sv, q);
    printf("The result is %d \n", sequence(sv, q));
    sv = 12;
    q = 10;
    printf("sv = %d, q = %d \n", sv, q);
    printf("The result is %d \n", sequence(sv, q));
    return 0;
}