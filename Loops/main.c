#include <stdio.h>

void printSeparator(char separatorText[]);

int main() {

    //region While-do loop
    printSeparator("While loop");
    int i = 0;
    while(i < 10){
        printf("i =  %d\n", i);
        i++;
    }
    //endregion

    //region While loop with break statement
    printSeparator("While loop with break statement");
    i = 0;
    while(i < 10){
        printf("i =  %d\n", i);
        i++;
        if (i % 5 == 0) break;
    }
    //endregion

    //region While loop with continue
    printSeparator("While loop with continue");
    i = 0;
    while(i < 10){
        if (i % 5 == 0){
            i++;
            continue;
        }
        printf("i =  %d\n", i);
        i++;
    }
    //endregion
    //region Do-While loop
    printSeparator("Do-While loop");
    int j = 10;
    do{
        printf("j =  %d\n", j);
        j++;
    }
    while(j < 20);
    //endregion

    //region For loop
    printSeparator("For loop");
    for(int index = 20; index <30; index++){
        printf("index = %d\n", index);
    }
    //endregion

    //region For loop with break statement
    printSeparator("For loop with break statement");
    for(int index = 10; index <30; index++){
        printf("index = %d\n", index);
        if (index % 15 == 0) break;
    }
    //endregion

    //region For loop with continue
    printSeparator("For loop with continue");
    for(int index = 10; index <30; index++){
        if (index % 15 == 0) continue;
        printf("index = %d\n", index);
    }
    //endregion

    //region Showing difference between Do-while and while-do loop
    i = 10;
    printSeparator("Do-while vs while-do loop");
    while (i <10){
        printf("i is less than 10 (while-do loop)\n");
    }
    do{
        printf("i is less than 10 (do-while loop)\n");
    }
    while(i < 10);
    //endregion

    //region For loop with multiple statements
    printSeparator("For loop with multiple statements");
    for(i = 0, j = 10; i < 10; i++, j--){
        printf("i = %d\n", i);
        printf("j = %d\n", j);
    }
    //endregion

    //region Nested while loops
    printSeparator("Nested while loop");
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
    printSeparator("Nested for loop");
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            printf("%d * %d = %d\n", x, y, x * y);
        }
    }
    //endregion

    return 0;
}

void printSeparator(char separatorText[]){
    printf("\n");
    printf("##### %s #####\n", separatorText);
}