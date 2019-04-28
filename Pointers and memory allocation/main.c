#include <stdio.h>
#include "prototypes.c"
#include "structures.c"

int main() {
    dataStructureSize();
    memoryAddress();
    return 0;
}

void dataStructureSize(){
    int a;
    char c;
    char string[64];

    //region Print size
    printf("##### Data structures sizes #####\n");
    printf("int size: %lu\n", sizeof(a));
    printf("character size: %lu\n", sizeof(c));
    printf("string size: %lu\n", sizeof(string));
    printf("laptop structure size: %lu\n", sizeof(struct Laptop));
    //endregion
}

void memoryAddress(){
    int a;
    char c;
    char string[64];
    struct Laptop laptop = {
            "HP",
            2500.00,
            16,
            "Intel Core i7-9600K"
    };
    //region Print memory address
    printf("##### Memory addresses #####\n");
    printf("int memory address: %p\n", &a);
    printf("character memory address: %p\n", &c);
    printf("string memory address: %p\n", &string);
    printf("laptop structure memory address: %p\n", &laptop);
    //endregion
}