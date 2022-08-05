//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

//Define Value PI
#define PI 3.14

int main() {
    int Radius;
    float Perimeter, Area;

    printf("Input Radius: ");
    scanf("%d", &Radius);

    Perimeter = 2*PI*Radius;
    Area = PI*Radius*Radius;

    printf("Perimeter Of Circle : %0.2f\n", Perimeter);
    printf("Area Of Circl : %0.2f\n", Area);

    return 0;
}