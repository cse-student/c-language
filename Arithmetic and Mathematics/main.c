#include <stdio.h>
#include <math.h>

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
    printf("%d + %d = %d\n", x, y, x+y);

    //Subtraction
    printf("%d - %d = %d\n", x, y, x-y);

    //Multiplication
    printf("%d x %d = %d\n", x, y, x*y);

    //Division
    printf("%d / %d = %0.2f\n", x, y, a/b);

    //Incrementing
    x++;
    printf("x++ = %d\n", x);

    //Decrementing
    x--;
    printf("x-- = %d\n", x);

    //Modulo
    printf("x %% y = %d\n", x%y);

    //Square root
    printf("Square root of %d = %0.2f\n", x, sqrt(x));
    printf("Square root of %d = %0.2f\n", y, sqrt(y));

    //Power
    printf("%d power 2 = %0.0f\n", x, pow(x, 2));
    printf("%d power 2 = %0.0f\n", y, pow(y, 2));

    //E notation
    printf("%0.2f\n", 2.5E2); //Positive power
    printf("%0.5f\n", 1.5E-3); //Negative power
    
    return 0;
}