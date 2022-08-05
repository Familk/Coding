//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

//Reverse Number Function
//Foumla
int ReverseNumber(int Number) {
    int Reverse = 0;
    while (Number > 0) {
        Reverse = Reverse * 10 + Number % 10;
        Number /= 10;
    }
    
    return Reverse;
}

int main(void) {
    int Number, PrintNumber;

    printf("Input  Number: ");
    scanf("%d", &Number);

    PrintNumber = ReverseNumber(Number);

    printf("Number Reverse: %d\n", PrintNumber);
    
    return 0;
}