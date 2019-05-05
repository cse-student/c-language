#include "stdlib.h"

void memoryAllocation(){
    //region int memory allocation
    printf("size of int: %d\n", sizeof(int));
    int *integers = malloc(sizeof(int)*5);
    int i = 0;
    for(int i = 0; i < 5; i++){
        *(integers+i) = i;
    }
    for(int i = 0; i < 5; i++){
        printf("Integer at index %d = %d\n", i, *(integers+i));
    }
    //endregion
}

void helloWorldUsingPointers(){
    // allocating memory
    char *userName = malloc(sizeof(char)*256);

    //region Getting user input
    printf("Enter your name: \n");
    fgets(userName, 256, stdin);
    //endregion

    //Print message
    printf("Hello World by ");

    while(*userName != '\0'){
        putchar(*userName);
        userName++;
    }
}