#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *q;

    p = (int *) malloc(sizeof(int));
    q = (int *) calloc(1, sizeof(int));

    printf("p address memory is %d, the content addressed is %d\n", p, *p);
    printf("q address memory is %d, the content addressed is %d\n", q, *q);

    *p = 100;
    *q = 200;

    printf("p address memory is %d, the content addressed is %d\n", p, *p);
    printf("q address memory is %d, the content addressed is %d\n", q, *q);

    p = realloc(p, sizeof(int));
    p++;
    *p = 500;
    p--;
    printf("p address memory is %d, the content addressed is %d\n", p, *p);
    p++;
    printf("p + 1 address memory is %d, the content addressed is %d\n", p, *p);
    p--;
    free(p);
    printf("hi\n");
    free(q);
    return 0;
}