#include <string.h>

//region Functions with memory addresses/pointer variables as parameter
void increment(int *intPointer){
    *intPointer = *intPointer + 1;
}

void modChar(char *c){
    *c = *c +1;
}

void modString(char *string){
    strcpy(string, "Hello World");
}
//endregion

void passingMemoryAddresses(){
    printSeparator("Passing Memory addresses as arguments");
    int num = 10;
    increment(&num);
    printf("Num = %d\n", num);

    char c = 'c';
    modChar(&c);
    printf("c = %c\n", c);

    char string[256] = "Hello";
    modString(string);
    printf("string = %s\n", string);
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    //
    // The value of variables changed even no return was made
    // This is because the address of the variables were passed to the function
    // thus the values located at those memory address were bing manipulated the
    // modifications were reflected on the variables
    //
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
}

void passingPointersToFunctions(){
    printSeparator("Passing pointer variables as arguments");
    //region variables declaration and initialization
    int num = 15;
    char c = 'a';
    char string[256] = "Hello";
    //endregion

    //region Pointer variables declaration and initialization
    int *numPointer = &num;
    char *charPointer = &c;
    char *stringPointer = string;
    //endregion

    //region Passing pointer variables as arguments
    increment(numPointer);
    modChar(charPointer);
    modString(stringPointer);
    //endregion

    //region Printing variables values
    printf("Num = %d\n", num);
    printf("c = %c\n", c);
    printf("string = %s\n", string);
    //endregion
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    //
    // The pointer variables were assigned  the memory addresses of the variables.
    // Therefore when modification were being performed on the
    // memory location of those pointer variables, they were reflected on the variables
    //
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
}
