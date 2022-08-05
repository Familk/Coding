//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>

int main() {
    char InputChar;

    printf("Input  Number: ");
    scanf("%c", &InputChar);

    if ((InputChar >= 65 && InputChar <=90) || (InputChar >=97 && InputChar <=122 )) {
        printf("Input Char is: Alphabet");
    }
    if (InputChar >= 48 && InputChar <=57) {
        printf("Input Char is: Number");
    }
    if (InputChar >= 40 && InputChar <=47) {
        printf("Input Char is: Math");
    }
    else {
        printf("Input Char is: No Format Available");
    }

    return 0;
}