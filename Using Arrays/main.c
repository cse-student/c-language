#include <stdio.h>
#include "prototypes.c"

int main() {
    intArray();
    intArray2D();
    charArray();
    return 0;
}

void intArray(){
    int array[10];
    printf("##### Int array #####\n");
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

void intArray2D(){
    int array[3][3];
    printf("##### 2D Int array #####\n");

    //region initializing array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            array[i][j] = 0;
        }
    }
    //endregion

    //region Print array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
    //endregion
}

void charArray(){
    printf("##### Char array #####\n");
    //region Initializing arrays
    char array1[20] = {
            'c', '-', 'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e' , '\0'
    };
    char array2[20] = "c-language";
    //endregion
    printf("%s\n", array1);
    printf("%s\n", array2);
}