//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

void QuadraticEquation(float NumberA, float NumberB, float NumberC, float NumberD, float NumberM, float NumberN) {
    float D = (NumberA * NumberD) - (NumberC * NumberB);
    float DX = (NumberM * NumberD) - (NumberN * NumberB);
    float DY = (NumberN * NumberA) - (NumberM * NumberC);
    float X = DX / D;
    float Y = DY / D;

    if (D == 0) {
        if ((DX + DY) == 0) {
            printf("Infinity solution!\n");
        }

        else {
            printf("No solution!\n");
        }
    }

    else {
        printf("X: %f\n", X);
        printf("Y: %f\n", Y);
    }
}

int main() {
    float NumberA, NumberB, NumberC, NumberD, NumberM, NumberN;

    printf("Quadratic Equation Expression:");
    printf("\nax + by = m");
    printf("\ncx + dy = n");
    printf("\nInput Number A, Number B and Number M: "); 
    scanf("%f %f %f", &NumberA, &NumberB, &NumberM);
    printf("\nInput Number C, Number D and Number N: "); 
    scanf("%f %f %f", &NumberC, &NumberD, &NumberN);

    QuadraticEquation(NumberA, NumberB, NumberC, NumberD, NumberM, NumberN);
    return 0;
}//Piraterine