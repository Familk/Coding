#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float Length, Width, Perimeter, Area;

    printf("Input Length and Width: ");
    scanf("%f %f", &Length, &Width);

    Perimeter = (Length + Width) * 2;
    Area = Length * Width;

    printf("Perimeter Of Rect : %0.2f\n", Perimeter);
    printf("Area Of Rect : %0.2f\n", Area);

    return 0;
}