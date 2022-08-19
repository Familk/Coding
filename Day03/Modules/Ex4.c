//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

void QuadraticEquation(float NumberA, float NumberB, float NumberC) {
    float Delta = (pow(NumberB, 2)) - (4 * NumberA * NumberC);
    float X1, X2;

    if (Delta > 0.0000f) {
        X1 = (-NumberB + sqrt(Delta)) / (2 * NumberA);
        X2 = (-NumberB - sqrt(Delta)) / (2 * NumberA);

        printf("2 Solutions: \n");
        printf("X1: %f\n", X1);
        printf("X2: %f\n", X2);
    }

    else if (Delta == 0.0000f) {
        X1 = (-NumberB) / (2 * NumberA);

        printf("One solution: \n");
        printf("X1: %f\n", X1);
    }

    else {
        printf("No solution found!\n");
    }
}

int main() {
    float NumberA, NumberB, NumberC;

    printf("Quadratic Equation 2 Expression: ax^2 + bx + c = 0");
    printf("Input Number A != 0 , Number B and Number C: ");
    scanf("%0.4f %0.4f %0.4f", &NumberA, &NumberB, &NumberC);

    QuadraticEquation(NumberA, NumberB, NumberC);
    return 0;
}