#include <stdio.h>

//Global Constants
#define x 10
#define y 15
#define z x+y

int main() {

    //region constants
    const int n = 10;
    printf("n = %d\n", n);

    const char c = 'c';
    printf("c = %c\n", c);

    const char message[] = "Hello World\n";
    printf(message);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    //endregion

    //region Variables
    double num = 10.25;
    num++;
    printf("var num = %f\n", num);

    num = 15.02;
    printf("var num = %f\n", num);

    //endregion
    return 0;

}