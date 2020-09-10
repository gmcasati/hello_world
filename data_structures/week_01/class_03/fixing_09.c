#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NMAX 11

int main() {
    char *m;
    int i;

    m = (char *) malloc(5 * NMAX * sizeof(char));
    //printf("%x\n", m);
    strcpy(m, "Ola");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, ", mundo");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "!");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, " Que dia");
    //printf("%s", m);
    m += NMAX;
    
    strcpy(m, " lindo!\n");
    //printf("%s", m);
    m += NMAX; 

    m -= 5 * NMAX;
    //printf("\n%s %x", m, m);
    for(i = 0; i < 5; i++) {
        printf("%s", m);
        m += NMAX;
    }

    m -= 5 * NMAX;
    //printf("\n%s %x", m, m);
    m = realloc(m, 10 * NMAX * sizeof(char));
    //printf("\n%s %x", m, m);
    m += 5 * NMAX;
    //printf("\n%x", m);
    strcpy(m, "As ");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "ondas ");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "sao ");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "grandes! ");
    //printf("%s", m);
    m += NMAX;
    
    strcpy(m, "Legal!\n");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "Bora ");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "fazer ");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "um ");
    //printf("%s", m);
    m += NMAX;

    strcpy(m, "surfe! ");
    //printf("%s", m);
    m += NMAX;
    
    strcpy(m, "Aeee!\n");
    //printf("%s", m);
    m += NMAX;

    m -= 15 * NMAX;
    //printf("\n%s %x", m, m);
    printf("\n");
    for(i = 0; i < 15; i++) {
        printf("%s", m);
        m += NMAX;
    }
    m -= 15 * NMAX;
    printf("\n%s %x", m, m);
    printf("\n asa");
    free(m);
    return 0;
}