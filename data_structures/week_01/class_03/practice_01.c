#include <stdio.h>

#define MAX 20

int main() {
    int odds[MAX/2], evens[MAX/2];
    int k, i_odd, i_even;

    for(k = 1, i_odd = 0, i_even = 0; k <= MAX; k++) {
        if(k % 2 == 0) {
            evens[i_even] = k;
            i_even++;
        } else {
            odds[i_odd] = k;
            i_odd++;
        }
    }

    for(k = 0; k < MAX/2; k++) {
        printf("odds[%d] + evens[%d] = %2d + %2d = %2d\n", k, k, odds[k], evens[k], odds[k] + evens[k]);
    }

    return 0;
}