#include <stdio.h>

int main() {
    int v[5][2] = {{2, 4}, {6, 8}, {10, 12}, {14, 16}, {18, 20}};
    int i, j;
    int *p;

    p = (int*) v;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            printf("On position v[%d][%d] - value is: %2d, memory address is %x; ",
            i, j, v[i][j], &v[i][j]);
            printf("On position p[%d] - value is %2d, memory address is %x;\n",
            (i * 2) + j, *p, p);
            p++;
        }
    }

    return 0;
}