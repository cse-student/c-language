#include <stdio.h>

int main() {

    //region While-do loop
    int i = 0;
    while(i < 10){
        printf("i =  %d\n", i);
        i++;
    }
    //endregion

    //region Do-While loop
    int j = 10;
    while(j < 20){
        printf("j =  %d\n", j);
        j++;
    }
    //endregion

    //region For loop
    for(int index = 20; index <30; index++){
        printf("index = %d\n", index);
    }
    //endregion

    //region Nested while loops
    i = 0;
    while(i < 5){
        j = 0;
        while(j < 5){
            printf("%d + %d = %d\n", i, j, i + j);
            j++;
        }
        i++;
    }
    //endregion

    //region Nested For loops
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            printf("%d * %d = %d\n", x, y, x * y);
        }
    }
    //endregion

    return 0;
}