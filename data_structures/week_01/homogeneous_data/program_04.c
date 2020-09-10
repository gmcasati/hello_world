#include <stdio.h>

int main() {
    int v[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int i;

    for(i = 0; i < 10; i++) {
        printf("On position v[%d] - value: %2d, address: %x; \n", i, v[i], &v[i]);
    }

    return 0;
}