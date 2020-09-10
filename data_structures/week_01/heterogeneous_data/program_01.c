#include <stdio.h>
#include <string.h>

struct product {
    int id;
    char name[50];
    char brand[50];
    float purchase;
    float sell;
};

int main() {
    struct product p;

    p.id = 100;
    strcpy(p.name, "Caneta Estereografica");
    strcpy(p.brand, "Faber Castell");
    p.purchase = 0.85;
    p.sell = 1.80;

    printf("Data of product with id: %d\n", p.id);
    printf("Name                   : %s\n", p.name);
    printf("Brand                  : %s\n", p.brand);
    printf("Purchase price         : %10.2f\n", p.purchase);
    printf("Sell price             : %10.2f\n", p.sell);

    return 0;
}