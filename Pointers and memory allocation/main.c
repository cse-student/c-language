#include <stdio.h>
#include "prototypes.c"
#include "structures.c"

int main() {
    //dataStructureSize();
    //memoryAddress();
    intPointer();
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

void intPointer(){
    //region declaration
    int num; //int variable
    int num2; //second int variable
    int *numPointer; //int pointer variable
    //endregion

    numPointer = &num; //numPointer is allocated the address of the variable num

    printf("The address of variable num = %p\n", &num);
    printf("The address of pointer variable *numPointer = %p\n", numPointer);

    //assigning value to variable num
    num = 10;

    printf("The value of variable num = %d\n", num);
    printf("The value of pointer variable *numPointer = %d\n", *numPointer);
    /*
     * The value of pointer variable numPointer is the same as variable num as
     * pointer variable numPointer is pointing to the same memory address as that
     * being used by variable num
     */

    //assigning the variable num2 the value to which pointer variable numPointer is pointing at
    num2 = *numPointer;
    printf("The value of variable num2 = %d\n", num2);

    //changing the value of variable num
    num = 15;
    printf("The value of variable num = %d\n", num);
    printf("The value of variable num2 = %d\n", num2);
    printf("The value of pointer variable *numPointer = %d\n", *numPointer);
    /*
     * As the value of variable num is modified the value of pointer variable numPointer
     * also is changed as it is pointing to the same memory location where variable num is stored
     * Variable num2 is not changed as it has only been assigned the same value of num
     */
}