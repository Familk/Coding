#include <stdio.h>
#include <math.h>
#include <conio.h>
#define Acceleration 9.81
#define PI 3.14

int main() {
    float Length, Cycle;

    printf("Input Ferenheit Temperature: ");
    scanf("%f", &Length);

    Cycle = sqrt(2*PI*(Length/Acceleration));

    printf("Cyle of Pendulum : %0.2f\n", Cycle);
    
    return 0;
}