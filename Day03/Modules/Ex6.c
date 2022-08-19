//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    char Option;
    float Temperature, Celcius, Fahrenheit;

    printf("Choose options:");
    printf("\nFahrenheit To Celcius: Type 'C'");
    printf("\nCelsius To Fahrenheit: Type 'F'");
    printf("\nYour option: ");
    scanf("%c", &Option);
    printf("Input Temperature: ");
    scanf("%f", &Temperature);

    Fahrenheit = Temperature * 9 / 5 + 32;
    Celcius = (Temperature - 32) * (5 / 9);

    switch (Option) {
    case 'C':
        printf("Temperature Celcius: %f", Celcius);
        break;
    
    case 'F':
        printf("Temperature Fahrenheit: %f", Fahrenheit);
        break;

    default:
        printf("Unknown option %c", Option);
        break;
    }

    return 0;
}