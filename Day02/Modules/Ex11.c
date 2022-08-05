//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int Money, Remaining0, Remaining1, Remaining2, Remaining3, M50D, M20D, M10D, M5D, M1D;

    printf("Input Total Money: ");
    scanf("%d", &Money);

    M50D = Money /  50;
    Remaining0 = Money - (M50D * 50);
    
//Print Money : 1VND
    if (Remaining0 < 5) {
        M1D = Remaining0 / 1;
    }
//Print Money : 1VND, 5VND
    if (Remaining0 < 10) {
        M5D = Remaining0 / 5;
        Remaining1 = Remaining0 - (M5D * 5);

        if (Remaining2 < 5) {
            M1D = Remaining2 / 1;
        }
    }
//Print Money : 1VND, 5VND, 10VND
    if (Remaining0 < 20) {
        M10D = Remaining0 / 10;
        Remaining1 = Remaining0 - (M10D * 10);

        if (Remaining1 < 10) {
            M5D = Remaining1 /  5;
            Remaining2 =  Remaining1 - (M5D * 5);

            if (Remaining2 < 5) {
                M1D = Remaining2 / 1;
            }
        }
    }
//Print Money : 1VND, 5VND, 10VND, 20VND
    if (Remaining0 < 50) {
        M20D =  Remaining0 / 20;
        Remaining1 =  Remaining0 - (M20D * 20);

        if (Remaining1 < 20) {
            M10D = Remaining1 / 10;
            Remaining2 = Remaining1 - (M10D * 10);

            if (Remaining2 < 5) {
                M5D = Remaining2 / 5;
                Remaining3 = Remaining2 - (M5D * 5);

                if (Remaining3 < 1) {
                    M1D = Remaining3 / 1;
                }
            }
        }
    }

    printf("50D 20D 10D 5D 1D: %d %d %d %d %d", M50D, M20D, M10D, M5D, M1D);
    
    return 0;
}