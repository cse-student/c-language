#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//region Prototype

//region void functions
void add();
void subtract();
void multiply();
void divide();
//endregion

//region with return values
int randomNumGenerator();
//endregion

//endregion


int main() {
    add();
    subtract();
    multiply();
    divide();

    int randInt = randomNumGenerator();
    printf("Random number = %d\n", randInt);

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