#include <stdio.h>

//global variable
int x = 0;

//extern variable
extern c;
extern d;

void increment(int x) {
    x++;
}

void addition() {
    auto int a;
    auto int b;
    a = 5;
    b = 10;
    printf("%d + %d = %d\n", a, b, a + b);
}

void externVarInit(int num) {
    extern int c;
    extern int d;
    c += num;
    d += num;
}

char *nonStaticMessgae() {
    char message[] = "Introduction to scope of variables with c";
    return message;
}

char *staticMessgae() {
    static char message[] = "Introduction to scope of variables with c";
    return message;
}

int main() {

    //region global variable
    printf("GLOBAL VARIABLES\n");
    printf("x = %d\n", x);
    increment(x);
    printf("x = %d\n", x);
    //As you can see the changes are retained even if it is being modified by another function
    // (outside the scope of this function)
    //endregion


    //region auto variable
    printf("AUTO VARIABLES\n");
    auto int a = 0;
    auto int b = 0;
    addition();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    //Notes for an auto variable it exist only within the scope where it has been declared
    //Changes made to a variable with the same name will not affect them
    //endregion

    //region extern variables
    printf("EXTERN VARIABLE\n");
    extern int c;
    extern int d;
    externVarInit(10);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    //Notes: extern variables scopes can be extended through various files
    //endregion

    //region static variable
    printf("STATIC VARIABLE\n");
    printf("%s\n", nonStaticMessgae());
    printf("%s\n", staticMessgae());
    //Notes the value is retained only if it has been declared using the static keyword
    //endregion
    return 0;
}

