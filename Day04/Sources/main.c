#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int n, x, y, i;
    i = 1;
    y = 1;

    printf("Enter integer number: ");
    scanf("%d", &n);
    printf("Input: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        y = pow(x, i);
    }

    printf("N = %d\n", y);
}