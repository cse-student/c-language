#include <string.h>

//region Functions with pointer variables as parameter
void increment(int *intPointer){
    *intPointer = *intPointer + 1;
}

void modChar(char *c){
    *c = *c +1;
}

void modString(char *string){
    strcpy(string, "Hello World");
}

void passingMemoryAddresses(){
    int num = 10;
    increment(&num);
    printf("Num = %d\n", num);

    char c = 'c';
    modChar(&c);
    printf("c = %c\n", c);

    char string[256] = "Hello";
    modString(string);
    printf("string = %s\n", string);
    /*
     * The value of variable 'num' changed even no return was made
     * This is because the address of the variable num was passed to the function
     * thus the value located at that memory address itself was manipulated
     * */
}
//endregion
