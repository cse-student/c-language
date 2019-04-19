#include <stdio.h>

int main() {

    //region Reading a character
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("character = %c", c);
    putchar('\n');
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region scanf
    //region Reading an character using scanf
    printf("Enter another character: ");
    scanf("%c", &c);
    printf("character = %c", c);
    putchar('\n');
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region Reading an integer using scanf
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("number = %d", number);
    putchar('\n');
    //endregion

    //flush buffer
    fseek(stdin,0,SEEK_END);

    //region Reading a floating-point number
    float fnumber;
    printf("Enter a floating point number: ");
    scanf("%f", &fnumber);
    printf("floating point number = %f", fnumber);

    //flush buffer
    fseek(stdin,0,SEEK_END);
    //endregion

    //endregion
    return 0;
}