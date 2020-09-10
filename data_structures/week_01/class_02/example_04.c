#include <stdio.h>
#include <limits.h>

int main() {
    printf("Smallest integer: %d; Greatest integer: %d\n", INT_MIN, INT_MAX);
    printf("Greatest unsigned integer: %u\n", UINT_MAX);
    printf("Number of bits for byte: %d\n", CHAR_BIT);
    printf("Minimum char: %d; Maximum char: %d\n", CHAR_MIN, CHAR_MAX);
    return 0;
}