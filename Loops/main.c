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

    //Nested while loops
    i = 0;
    while(i < 10){
        j = 0;
        while(j < 5){
            printf("%d + %d = %d\n", i, j, i + j);
            j++;
        }
        i++;
    }

    return 0;
}