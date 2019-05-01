#include <stdio.h>
#include "prototypes.c"
#include "structures.c"

int main() {
    dataStructureSize();
    memoryAddress();
    intPointer();
    charPointer();
    intArrayPointer();
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
    printSeparator("Int Pointers");
    numPointer = &num; //numPointer is allocated the address of the variable num

    printSeparator("Variables memory addresses");
    printf("The address of variable num = %p\n", &num);
    printf("The address of pointer variable *numPointer = %p\n", numPointer);

    //assigning value to variable num
    num = 10;

    printSeparator("Value of variables and pointer variable");
    printf("The value of variable num = %d\n", num);
    printf("The value of pointer variable *numPointer = %d\n", *numPointer);
    /*
     * The value of pointer variable numPointer is the same as variable num as
     * pointer variable numPointer is pointing to the same memory address as that
     * being used by variable num
     * */

    //assigning the variable num2 the value to which pointer variable numPointer is pointing at
    printSeparator("Assigning the value of variable pointer to a variable");
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
     * */

    //region Using pointer to modify the value of the variables num and num2
    printSeparator("Using pointer to modify variables");
    *numPointer = 25;
    printf("The value of variable num = %d\n", num);
    /*
     * The value of variable num has been changed as pointer variable numPointer
     * is pointing to the address location being used by variable num
     * */

    //Changing the address location of pointer to that of variable num2
    numPointer = &num2;
    *numPointer = 50;
    printf("The value of variable num2 = %d\n", num2);
    printf("The value of variable num = %d\n", num);
    /*
     * Note that here the value of variable num has not been changed as
     * pointer variable numPointer is no longer referencing it (it's referencing variable num2)
     * */
    //endregion
}

void charPointer(){
    printSeparator("Char Pointer");
    //region variables declaration
    char a;
    char b;
    char c;
    char *p;
    //endregion

    a = 'a';
    //Initializing pointer p to variable a
    p = &a;

    //Assigning variable b the value being referenced by pointer variable p
    b = *p;

    //Assigning pointer variable p to variable c
    p = &c;

    //Assigning pointer variable p the value 'Z'
    *p = 'Z';
    //Note that variable c will become 'c' as pointer variable p is referencing its memory location

    //region Printing variables values
    printf("a = %c\n", a);
    printf("b = %c\n", b);
    printf("c = %c\n", c);
    printf("*p = %c\n", *p);
}

void intArrayPointer(){
    //Pointer variable referencing integer array
    printSeparator("Int Array Pointer");
    int array[] = {0, 1, 2, 3, 4, 5, 6 ,7 , 8, 9};
    int x;
    int *p;
    p = array;
    printf("Initial memory address of variable pointer p = %p\n", &p);
    printf("Memory address of the array[0] = %p\n", &array[0]);
    /*
     * Initially the pointer variable p is referencing to the
     * memory location of the first element of  the array
     * */
    for(int i = 0; i < __crt_countof(array); i++){
        printf("Element at index %d = %d\n", i, *p);
        p++;
        /*
         * Each time the value of pointer variable p is incremented,
         * it points to the next value of the array
         * */
    }
}

void printSeparator(char separatorText[]){
    printf("\n");
    printf("##### %s #####\n", separatorText);
}