#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int i;
    int *p;

    p = v;
    for(i = 0; i < 5; i++) {
        printf("%d)\n", i + 1);
        printf("v[%d] is: %d, at memory address %x;\n", i, v[i], &v[i]);
        printf("p[%d] is: %d, at memory address %x;\n\n", i, p[i], &p[i]);
    }

    return 0;
}