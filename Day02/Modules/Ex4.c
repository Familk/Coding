//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float SideA, SideB, SideC, HalfPeri, Perimeter, Area;

    printf("Input Side A , B and C: ");
    scanf("%f %f %f", &SideA, &SideB, &SideC);

    Perimeter = SideA + SideB + SideC;
    HalfPeri = Perimeter / 2;
    Area = sqrt(HalfPeri*(HalfPeri - SideA)*(HalfPeri - SideB)*(HalfPeri - SideC));

    if ((SideA + SideB > SideC) && (SideA + SideC > SideC) && (SideB + SideC > SideA)) {
        printf("This is a Triangle\n");
        printf("Perimeter Of Triangle : %0.2f\n", Perimeter);
        printf("Area Of Triangle : %0.2f\n", Area);
    }
    else {
        printf("Error: This isn't a Triangle");
    }

    return 0;
}