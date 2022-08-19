#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int x, y, i;
    i = 1;
    y = 1;

    printf("Enter integer number: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        y = y * i;
    }

    printf("N = %d\n", y);
}