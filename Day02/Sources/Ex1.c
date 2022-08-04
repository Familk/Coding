#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int a, b, sum, sub, multi, divide, mod;

    printf("Input Integer A and B: ");
    scanf("%d" "%d", &a ,&b);

    sum = a + b;
    sub = a - b;
    multi = a * b;
    divide = a / b;
    mod = a % b;

    printf("Sum Of A and B is: %d\n", sum);
    printf("Subtract Of A and B is: %d\n", sub);
    printf("Multi Of A and B is: %d\n", multi);
    printf("Divide Of A and B is: %d %d\n", divide, mod);

    return 0;
}