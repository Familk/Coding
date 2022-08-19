//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

void isTriangle(float NumberA, float NumberB, float NumberC) {
    float Perimeter = NumberA + NumberB + NumberC;
    float HPerimeter = Perimeter / 2;
    float Area = sqrt(HPerimeter * (HPerimeter - NumberA) * (HPerimeter - NumberB) * (HPerimeter - NumberC));
    float HeightA = (2 * Area) / NumberA;
    float HeightB = (2 * Area) / NumberB;
    float HeightC = (2 * Area) / NumberC;

    if (NumberA > 0 && NumberB > 0 && NumberC > 0) {
        if ((NumberA + NumberB > NumberC) && (NumberA + NumberC > NumberB) && (NumberB + NumberC > NumberA)) {
            if (Area > 0) {   
                printf("Perimeter: %f\n", Perimeter);
                printf("Area: %f\n", Area);
                printf("Height A: %f\n", HeightA);
                printf("Height B: %f\n", HeightB);
                printf("Height C: %f\n", HeightC);
                printf("HPerimeter %f", HPerimeter);
            }

            else {
                printf("Error Area");
            }
        }

        else {
            printf("This is not triangle.\n");
        }
    }

    else {
        printf("One in Three slides is below 0. Error!");
    }
}

int main() {
    float NumberA, NumberB, NumberC;

    printf("Enter the Number A, B and C: ");
    scanf("%f %f %f", &NumberA, &NumberB, &NumberC);

    isTriangle(NumberA, NumberB, NumberC);

    return 0;
}