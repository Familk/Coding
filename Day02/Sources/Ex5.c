#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14

int main() {
    float Radius, Volume, Area;

    printf("Input Side Radius: ");
    scanf("%f", &Radius);

    Volume = (4*PI*pow(Radius, 3)) / 3;
    Area = 4*PI*pow(Radius, 2);

    printf("Volume Of Globular : %0.2f\n", Volume);
    printf("Area Of Globular : %0.2f\n", Area);
    
    return 0;
}