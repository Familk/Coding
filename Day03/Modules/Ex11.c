//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>

void MoneyCalculator (float Weight) {
    float TmpMoney_0, TmpMoney_1, Money, TmpMoWei_10, TmpMoWei_20, TmpMoWei_50;
    float TmpRemaining_0, TmpRemaining_1;

    if (Weight > 0 && Weight <= 100) {
        if (Weight > 0 && Weight <= 10) {
            TmpMoWei_10 = Weight * 5000;

            printf("Total Money: %f\n", TmpMoWei_10);
        }

        if (Weight > 10 && Weight <= 20 ) {
            TmpMoWei_10 = Weight * 5000;
            TmpRemaining_0 = Weight - 10;
            TmpMoWei_20 = TmpRemaining_0 * 5000;
            Money = TmpMoWei_10 + TmpMoWei_20;

            printf("Total money: %f\n", Money);
        }

        if (Weight > 20 && Weight <= 50) {
            TmpMoWei_10 = 10 * 5000;
            TmpMoWei_20 = 10 * 5000;
            TmpRemaining_0 = Weight - (10 + 10);
            TmpMoney_0 = TmpMoWei_10 + TmpMoWei_20 + (TmpRemaining_0 * 9000);
            Money = TmpMoney_0 * 1.02;

            printf("Total money: %f\n", Money);
        }

        if (Weight > 50 && Weight <= 100) {
            TmpMoWei_10 = 10 * 5000;
            TmpMoWei_20 = 10 * 5000;
            TmpMoWei_50 = 30 * 9000;
            TmpRemaining_0 = Weight - (10 + 10 + 30);
            TmpMoney_0 = (TmpMoWei_10 + TmpMoWei_20 + TmpMoWei_50) * 1.02;
            TmpMoney_1 = TmpMoney_0 + (TmpRemaining_0 * 20000);
            Money = TmpMoney_1 * 1.04;

            if (Money > 1000000) {
                Money = 1000000;

                printf("Total money: %0.0f\n", Money);
            }
            
            else {
                printf("Total money: %0.0f\n", Money);
            }
        }

        else {
            printf("Wegit is not enough");
        }
    }

    else {
        printf("Weight must be greater than zero and below one hundred\n");
    }
}

int main() {
    float Weight;

    printf("Enter Weight: ");
    scanf("%f", &Weight);

    MoneyCalculator(Weight);

    return 0;
}