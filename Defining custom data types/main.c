#include <stdio.h>
#include <time.h>

int main() {
    //Learning about the usage of typedef


    time_t now; //number of seconds passed since the Unix epoch time(Thursday 1 January 1970)
    //time_t is not a basic type but it is a type defined by typedef
    time(&now);
    printf("time: %s", ctime(&now));

    //region using typedef
    //defining new data type of float type
    typedef float radius;

    //declaring variable of previously defined type
    radius r;

    //instantiating variable
    r = 15.0;

    //using variable
    printf("Area of circle = 3.14xrxr = %0.2fcm",3.14*r*r);
    //endregion
    return 0;
}