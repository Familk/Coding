//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float X, NumberA, NumberB;

    printf("Input A and B: ");
    scanf("%f %f", &NumberA, &NumberB);

    if (NumberA == 0 && NumberB == 0) {
        printf("The equation has infinitely many solutions");
    }

    if (NumberA == 0) {
        printf("The equation has no solution");
    }

    if (NumberA > 0 || NumberA < 0) {
        X = -NumberB / NumberA;
        printf("The solution of the equation: %0.2f\n", X);
    }

    return 0;
}