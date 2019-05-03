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