#include <stdio.h>
#include <math.h>
#include <string.h>
#include "bitwiseOperations.c"

void printSeparator(char separatorText[]);

int main() {
    //region variables declaration and initialization
    int x;
    int y;

    printf("Enter a number (x): ");
    scanf("%d", &x);
    printf("Enter another number (y): ");
    scanf("%d", &y);

    float a = x;
    float b = y;
    //endregion

    //Addition
    printSeparator("Addition");
    printf("%d + %d = %d\n", x, y, x+y);

    //Subtraction
    printSeparator("Subtraction");
    printf("%d - %d = %d\n", x, y, x-y);

    //Multiplication
    printSeparator("Multiplication");
    printf("%d x %d = %d\n", x, y, x*y);

    //Division
    printSeparator("Division");
    printf("%d / %d = %0.2f\n", x, y, a/b);

    //Incrementing
    x++;
    printSeparator("Incrementing");
    printf("x++ = %d\n", x);

    //Decrementing
    x--;
    printSeparator("Decrementing");
    printf("x-- = %d\n", x);

    //Modulo
    printSeparator("Modulo");
    printf("x %% y = %d\n", x%y);

    //Square root
    printSeparator("Square root");
    printf("Square root of %d = %0.2f\n", x, sqrt(x));
    printf("Square root of %d = %0.2f\n", y, sqrt(y));

    //Power
    printSeparator("Power");
    printf("%d power 2 = %0.0f\n", x, pow(x, 2));
    printf("%d power 2 = %0.0f\n", y, pow(y, 2));

    //E notation
    printSeparator("E notation");
    printf("%0.2f\n", 2.5E2); //Positive power
    printf("%0.5f\n", 1.5E-3); //Negative power

    //Hexadecimal
    printSeparator("Hexadecimal");
    for(int i = 0x0; i <= 0x10; i++){
        printf("0x%X = %d\n", i, i);
    }

    //Octal
    printSeparator("Octal");
    for(int i = 00; i <= 010; i++){
        printf("0%o = %d\n", i, i);
    }

    //Calculations with type casting
    printSeparator("Type casting");
    printf("%d / %d = %0.2f\n", x, y, (float)x/y);

    //region Decimal to Binary
    printSeparator("Decimal to Binary");
    printf("1 in binary: %s\n", decimalToBinary(1));
    printf("3 in binary: %s\n", decimalToBinary(3));
    printf("4 in binary: %s\n", decimalToBinary(4));
    printf("5 in binary: %s\n", decimalToBinary(5));
    printf("10 in binary: %s\n", decimalToBinary(15));
    //endregion

    //region Bitwise operations
    printSeparator("Bitwise operations");

    //region Bitwise AND
    printSeparator("Bitwise AND operation");
    bitwiseAND(20,18);
    //endregion

    //region Bitwise OR
    printSeparator("Bitwise OR operation");
    bitwiseOR(20,18);
    //endregion

    //region Bitwise XOR
    printSeparator("Bitwise XOR operation");
    bitwiseXOR(20,18);
    //endregion

    //region OneComplement
    printSeparator("OneComplement");
    oneComplement(20);
    //endregion

    //region BitShift
    printSeparator("BitShift");

    //Left shift
    printSeparator("Left BitShift");
    leftShift(20);

    //Right shift
    printSeparator("Right BitShift");
    rightShift(64);

    //endregion

    //endregion
    
    return 0;
}

void printSeparator(char separatorText[]){
    printf("\n");
    printf("##### %s #####\n", separatorText);
}

