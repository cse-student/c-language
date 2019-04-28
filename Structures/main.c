#include <stdio.h>
#include <string.h>
#include "structures.c"

void print(struct Laptop laptop);

int main() {
    //region Initializing structures
    struct Laptop laptop1;
    strcpy(laptop1.brand,"DELL");
    laptop1.price = 1500.00;
    laptop1.ram = 8;
    strcpy(laptop1.processor, "Intel Core i5-9600K");

    struct Laptop laptop2 = {
        "HP",
        2500.00,
        16,
        "Intel Core i7-9600K"
    };
    //endregion

    //region Printing structure variables
    print(laptop1);
    print(laptop2);
    //endregion

    return 0;
}

void print(struct Laptop laptop){
    printf("##### Laptop #####\n");
    printf("Brand: %s\n", laptop.brand);
    printf("Price: %f\n", laptop.price);
    printf("Ram: %d\n", laptop.ram);
    printf("Processor: %s\n", laptop.processor);
    printf("\n");
}