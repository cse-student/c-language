#include <stdio.h>

void add() {
    printf("5 + 2 = %d\n", 5+2);
}

void subtract(){
    printf("5 - 2 = %d\n", 5-2);
}

void multiply(){
    printf("5 * 2 = %d\n", 5*2);
}

void divide(){
    printf("10 / 2 = %d\n", 10/2);
}

int main() {
    add();
    subtract();
    multiply();
    divide();
    return 0;
}

