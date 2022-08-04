#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int Exponential;
    float RealNumber, Expression;

    printf("Input Exponential: ");
    scanf("%d", &Exponential);
    printf("Input Number: ");
    scanf("%f", &RealNumber);

    Expression = pow(pow(RealNumber, 2) + RealNumber + 1, Exponential) + pow(pow(RealNumber, 2) + RealNumber - 1, Exponential);

    printf("Force : %0.2le\n", Expression);
    
    return 0;
}