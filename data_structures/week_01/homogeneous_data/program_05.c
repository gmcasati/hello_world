#include <stdio.h>

int main() {
    int m[5][2] = {{2, 4}, {6, 8}, {10, 12}, {14, 16}, {18, 20}};
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            printf("On position m[%d][%d] - value is: %2d, address is: %x;\n",
            i, j, m[i][j], &m[i][j]);
        }
    }

    return 0;
}