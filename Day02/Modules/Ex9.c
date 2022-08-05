//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int Exponential;
    float RealNumber;

    printf("Input Exponential: ");
    scanf("%d", &Exponential);
    printf("Input Number: ");
    scanf("%f", &RealNumber);

    printf("Force : %0.2le\n", pow(pow(RealNumber,2)+1,Exponential));
    
    return 0;
}