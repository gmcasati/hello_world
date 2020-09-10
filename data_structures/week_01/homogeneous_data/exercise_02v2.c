#include <stdio.h>

#define DIMR 2
#define DIMC 10

int main() {
    int m[DIMR][DIMC];
    int *p;
    int j_even, j_odd, k;
    int tot_values = DIMR * DIMC;
    
    p = (int*) m;
    for(k = 1, j_even = 0, j_odd = 0; k <= tot_values; k++) {
        if(k % 2 != 0) {
            *(p + j_odd) = k;
            j_odd++;
        } else {
            *(p + DIMC + j_even) = k;
            j_even++;
        }
    }

    for(k = 0; k < tot_values; k++) {
        if(k == 0)
            printf("\n%5s numbers between 1 and %d: ", "odds", tot_values);
        if(k == DIMC)
            printf("\n%5s numbers between 1 and %d: ", "evens", tot_values);
        
        printf("%2d ", *p);
        p++;
    }
}