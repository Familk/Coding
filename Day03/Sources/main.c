//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float NumberA, NumberB, NumberC, Delta, X1, X2;

    printf("Input Number A, B and C: ");
    scanf("%f", &NumberA, &NumberB, &NumberC);
    
    Delta = pow(NumberB, 2) - (4*NumberA*NumberC);
    
    if (Delta > 0) {
        X1 = (-NumberB + sqrt(Delta)) / 2*NumberA;
        X2 = (-NumberB - sqrt(Delta)) / 2*NumberA;

        printf("The equation has 2 solution\n");
        printf("First solution : %0.4f\n", X1);
        printf("Second solution : %0.4f\n", X2);
    }
    if (Delta == 0)
    {
        X1 = (-NumberB) / 2*NumberA;
        printf("The equation has double solution\n");
        printf("Double solution : %0.4f\n", X1);
    }
    else {
        printf("The equation has no solution\n");
    }

    return 0;
}