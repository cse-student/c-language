#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    //region variables declaration and initialization
    int x;
    printf("Enter number, x: \n");
    scanf("%d", &x);
    int y;
    printf("Enter number, y: \n");
    scanf("%d", &y);

    float a = x;
    float b = y;
    //endregion

    //region Simple if statement
    if (x > 10){
        printf("x is greater than 10\n");
    }

    //Region with multiple conditions
    // using &&
    if (x > 10 && x < 25){
        printf("x is between 10 and 15\n");
    }

    //using ||
    if (x > 50 || y > 50){
        printf("At least one of the 2 numbers is greater than 50\n");
    }

    //using both && and ||
    if (x > 50 || y > 50 && x < 75 || y < 75){
        printf("At least one of the 2 numbers is greater than 50 and at least one of the 2 numbers is less than 75.\n");
    }
    //endregion

    //region Simple if-else
    if (x > y){
        printf("x(%d) > y(%d)\n", x, y);
    }
    else if(x < y){
        printf("x(%d) < y(%d)\n", x, y);
    }
    else{
        printf("x(%d) == x(%d)\n", x, y);
    }
    //endregion

    //region Nested if-else statements
    if (x >10){
        if (x < 25){
            printf("x is greater than 10 && less than 25\n");
        }
        else if (x < 35){
            printf("x is greater than 10 && less than 35\n");
        }
    }
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region Switch Case
    char c;
    printf("Enter operator(+,-,*,/): \n");
    c = getchar();
    switch(c){
        case '+':
            printf("%d + %d = %d\n", x, y, x+y);
            break;
        case '-':
            printf("%d - %d = %d\n", x, y, x-y);
            break;
        //multiple case with same execution
        case '*':
        case 'x':
            printf("%d * %d = %d\n", x, y, x*y);
            break;
        case '/':
            printf("%d + %d = %0.2f\n", x, y, a/b);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    //endregion

    //region Ternary operator
    for(int i= 1; i < 10; i++){
        printf("%d is %s\n", i, i%2==0 ? "even" : "odd");
    }
    return 0;
}