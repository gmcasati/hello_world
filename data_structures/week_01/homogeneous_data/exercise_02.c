#include <stdio.h>
#define DIMR 2
#define DIMC 10

int main() {
    int v[DIMR][DIMC];
    int i, j, j_odd, j_even, k, tot_values;

    tot_values = DIMR * DIMC;
    for(k = 1, j_odd = 0, j_even = 0; k <= tot_values; k++) {
        if(k % 2 != 0) {
            v[0][j_odd] = k;
            j_odd++;
        } else {
            v[1][j_even] = k;
            j_even++;
        }
    }

    for(i = 0; i < DIMR; i++) {
        printf("%s between 1 and %d: ", i == 0 ? "odds": "evens", tot_values);
        for(j = 0; j < DIMC; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}