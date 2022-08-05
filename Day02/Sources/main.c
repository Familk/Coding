#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14

int main() {
    int NumberA, NumberB, NumberC;

    printf("Input Value Has 3 Number: ");
    scanf("%d%d%d", &NumberA, &NumberB, &NumberC);



    printf("Number Rotate: %d%d%d", NumberC, NumberB, NumberA);
    
    return 0;
}