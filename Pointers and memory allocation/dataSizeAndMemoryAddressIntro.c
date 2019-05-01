#include "shared.c"

void dataStructureSize(){
    int a;
    char c;
    char string[64];
    printSeparator("Data Structure Sizes");
    //region Print size
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
    printSeparator("Memory addresses");
    printf("int memory address: %p\n", &a);
    printf("character memory address: %p\n", &c);
    printf("string memory address: %p\n", &string);
    printf("laptop structure memory address: %p\n", &laptop);
    //endregion
}
