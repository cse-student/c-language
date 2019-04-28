#include <stdio.h>
#include "prototypes.c"
#include "structures.c"

int main() {
    dataStructureSize();
    return 0;
}

void dataStructureSize(){
    int a;
    char c;
    char string[64];

    //region Print size
    printf("int size: %d\n", sizeof(a));
    printf("character size: %d\n", sizeof(c));
    printf("string size: %d\n", sizeof(string));
    printf("laptop structure size: %d\n", sizeof(struct Laptop));
    //endregion
}