#include <stdio.h>
#include <time.h>
#include <string.h>
#include "header.h"

int main() {
    //Learning about the usage of typedef


    time_t now; //number of seconds passed since the Unix epoch time(Thursday 1 January 1970)
    //time_t is not a basic type but it is a type defined by typedef
    time(&now);
    printf("time: %s", ctime(&now));

    //region typedef using float as base type
    circleArea();
    rectangleArea();
    //endregion

    //region typedef with struc
    structTypedef();
    //endregion
    return 0;
}

void circleArea(){
    //declaring variable of previously defined type
    radius r;

    //instantiating variable
    r = 15.0;

    //using variable
    printf("Area of circle = 3.14 x r x r = %0.2fcm\n",3.14*r*r);
}

void rectangleArea(){
    //declaring variable of previously defined type
    width w;
    length l;
    //instantiating variable
    w = 10.0;
    l = 5.0;
    //using variable
    printf("Area of rectangle = %d x %d = %0.2fcm\n",w, l, w*l);
}

void print(struct Device device){
    printf("##### Device #####\n");
    printf("Brand: %s\n", device.brand);
    printf("Price: %f\n", device.price);
    printf("Ram: %d\n", device.ram);
    printf("Processor: %s\n", device.processor);
    printf("\n");
}

void structTypedef(){
    Laptop laptop;
    strcpy(laptop.brand,"DELL");
    laptop.price = 1500.00;
    laptop.ram = 8;
    strcpy(laptop.processor, "Intel Core i5-9600K");
    print(laptop);

    Smartphone smartphone;
    strcpy(smartphone.brand,"Apple");
    smartphone.price = 1000.00;
    smartphone.ram = 4;
    strcpy(smartphone.processor, "Apple A11 Bionic");
    print(smartphone);
}

