#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // receiving parameters
    double width = atof(argv[1]);
    double heigth = atof(argv[2]);
    printf("debug: %f %f\n", width, heigth);

    // declare and initialize variables
    double perimeter = 0.0;
    double area = 0.0;

    // do the calculations
    perimeter = 2.0 * (width + heigth);
    area = width * heigth;

    // show the output
    printf("Rectangle calculations\nInput data: Width: %f Height: %f\n", width, heigth);
    printf("Calculations: Perimeter: %f Area: %f",perimeter, area);

    return 0;
}
