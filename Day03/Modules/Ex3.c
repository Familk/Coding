//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    char Option;
    float NumberA, NumberB;

    printf("Choose an operator ( + , - , * , / ): ");
    scanf("%c", &Option);
    printf("Input Number A and B: ");
    scanf("%f %f", &NumberA, &NumberB);

    switch (Option) {
        case '+':
            printf("Number A Inputed : %0.2f\n", NumberA);
            printf("Number B Inputed : %0.2f\n", NumberB);
            printf("Sum of A and B : %0.2f\n", NumberA + NumberB);
            break;
        case '-':
            printf("Number A Inputed : %0.2f\n", NumberA);
            printf("Number B Inputed : %0.2f\n", NumberB);
            printf("Sum of A and B : %0.2f\n", NumberA - NumberB);
            break;
        case '*':
            printf("Number A Inputed : %0.2f\n", NumberA);
            printf("Number B Inputed : %0.2f\n", NumberB);
            printf("Sum of A and B : %0.2f\n", NumberA * NumberB);
            break;
        case '/':
            printf("Number A Inputed : %0.2f\n", NumberA);
            printf("Number B Inputed : %0.2f\n", NumberB);
            printf("Sum of A and B : %0.2f\n", NumberA / NumberB);
            break;
        default:
            printf("Error Input! Please input again.");
            break;
    }

    return 0;
}