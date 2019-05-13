#include "Structures.c"

//region void functions
void add();
void subtract();
void multiply();
void divide();
//endregion

//region Functions with return values
int randomNumGenerator();
//endregion

//region Functions with parameters
void sum(int a, int b, int c);
void multiplyV2(int a, int b, int c);
//endregion

//region Function with parameters with return values
double sumOfSquare(double a, double b, double c);
//endregion

//region Recursive Function
int recurse(int num);
void print(int num);
//endregion

//region Passing structures to function
void printLaptop(struct Laptop laptop);
void printLaptopV2(struct Laptop *laptop); // Passing structure pointer as argument
//endregion