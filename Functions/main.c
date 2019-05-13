#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
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

    printf("Sum of squares of numbers = %.f\n", sumOfSquare(2,4,5));

    recurse(2);

    struct Laptop laptop1;
    strcpy(laptop1.brand,"MSI");
    laptop1.price = 3000.00;
    laptop1.ram = 16;
    strcpy(laptop1.processor, "Intel Core i9-9600K");
    printLaptop(laptop1);

    struct Laptop *laptopPointer = &laptop1;
    printLaptopV2(laptopPointer);

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

double sumOfSquare(double a, double b, double c){
    double result = pow(a,2)+pow(b,2)+pow(c,2);
    return result;
}

int recurse(int num){
    if (num < 10){
        print(num);
        printf("Recursing\n");
        num++;
        recurse(num);
    }
    print(num);
    printf("Unwinding recursion\n");
}

void print(int num){
    for(int i = 0; i < num; i ++){
        putchar('#');
    }
}

void printLaptop(struct Laptop laptop){
    printf("##### Laptop Print V1#####\n");
    printf("Brand: %s\n", laptop.brand);
    printf("Price: %f\n", laptop.price);
    printf("Ram: %d\n", laptop.ram);
    printf("Processor: %s\n", laptop.processor);
    printf("\n");
}

void printLaptopV2(struct Laptop *laptop){
    printf("##### Laptop Print V2#####\n");
    printf("Brand: %s\n", laptop -> brand);
    printf("Price: %f\n", laptop -> price);
    printf("Ram: %d\n", laptop ->ram);
    printf("Processor: %s\n", laptop -> processor);
    printf("\n");
}