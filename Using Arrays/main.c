#include <stdio.h>
#include "prototypes.c"

int main() {
    intArray();

    return 0;
}

void intArray(){
    int array[10];
    printf("##### Int array #####");
    //region Initializing array
    for(int i = 0; i < __crt_countof(array); i++){
        array[i] = i;
    }
    //endregion

    //region Print array
    for(int i = 0; i < __crt_countof(array); i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    //endregion
}