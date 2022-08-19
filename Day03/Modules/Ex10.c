//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>

void MoneyCalculator (int TimeJoin, int TimeOut) {
    
    if (TimeJoin >= 6 && TimeOut <= 18) {
        float MoneyX = (12 - TimeJoin) * 6000;
        float MoneyY = (TimeOut - 12) * 7500;
        float Total = MoneyX + MoneyY;

        printf("Total: %0.0f VND\n", Total);
    }

    else {
        printf ("Time Input Error");
    }
}

int main() {
    int TimeJoin, TimeOut, Year;

    printf("Enter Time Join and Time Out: ");
    scanf("%d %d", &TimeJoin, &TimeOut);

    MoneyCalculator(TimeJoin, TimeOut);

    return 0;
}