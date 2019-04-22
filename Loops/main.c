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
    
    return 0;
}