#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototypes.c"

int main() {
    add();
    subtract();
    multiply();
    divide();

    int randInt = randomNumGenerator();
    printf("Random number = %d\n", randInt);

    sum(1,10,100);
    multiplyV2(1,10,100);
    return 0;
}

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

int randomNumGenerator(){
    srand(time(0));
    int result = rand() % 50;
    return result;
}

void sum(int a, int b, int c){
    printf("%d + %d + %d = %d\n", a, b, c, a+b+c);
}

void multiplyV2(int a, int b, int c){
    printf("%d x %d x %d = %d\n", a, b, c, a*b*c);
}