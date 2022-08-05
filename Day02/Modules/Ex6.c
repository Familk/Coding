#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float Ferenheit, Celsius;

    printf("Input Ferenheit Temperature: ");
    scanf("%f", &Ferenheit);

    Celsius = (Ferenheit - 32) * 5/9;

    printf("Celsius Temperature : %0.2f\n", Celsius);
    
    return 0;
}