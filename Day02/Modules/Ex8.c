#include <stdio.h>
#include <math.h>
#include <conio.h>
#define GravitationConstant 6.67E-11

int main() {
    float WeightA, WeightB, Distance, Force;

    printf("Input Weight A and B: ");
    scanf("%f %f", &WeightA, &WeightB);
    printf("Input Distance between Obj A and B: ");
    scanf("%f", &Distance);

    Force = GravitationConstant*(WeightA*WeightB)/pow(Distance, 2);

    printf("Force : %0.2le\n", Force);
    
    return 0;
}