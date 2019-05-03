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

//region Calling functions with pointer variables as arguments

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
//endregion

//region Functions returning pointers

char *compareChar(char char1, char char2){
    return char1 >= char2 ? &char1 : &char2;
}

char *addInt(int int1, int int2){
    int result = int1 + int2;
    return &result;
}
//endregion

//region Using Functions returning pointers

void returnsPointers(){
    //region returns char pointers
    char char1 = 'a';
    char char2 = 'b';
    printf("char: %c\n", *compareChar(char1, char2));
    //endregion

    //region int pointers
    int int1 = 5;
    int int2 = 10;
    printf("%d + %d = %d", int1, int2, *addInt(int1, int2));
    //endregion
}
//endregion

//region Functions with pointers parameters and returning pointers
int *multiply(int *int1, int *int2){
    int result = *int1 * *int2;
    return &result;
}

char *compareStrings(char *string1, char *string2){
    if (strlen(string1) >= strlen(string2)){
        return string1;
    }
    return string2;
}
//endregion

//region Using Functions with pointers parameters and returning pointers

void pointersParametersReturnsPointers(){
    int int1 = 2;
    int int2 = 5;
    printf("%d x %d = %d\n", int1, int2, *multiply(&int1, &int2));

    char string1[] = "Exploring Pointers";
    char string2[] = "With C-lang";
    printf("string1 = %s\n", string1);
    printf("string2 = %s\n", string2);
    printf("The longer string of the 2 is: \"%s\"\n", compareStrings(string1, string2));
}
//endregion