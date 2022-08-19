//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>

void CheckingFunction (int Day, int Month, int Year) {
    int TmpDate, TmpMonth, TmpYear;

    if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0 ) {
        if (Month == 2) {
            if (Day > 29) {
                printf("This is not a valid date\n");
            }

            else if (Day == 29) {
                TmpDate = 1;
                TmpMonth = ++Month;
                TmpYear = Year;
                printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
            }
            

            else {
                TmpDate = ++Day;
                TmpMonth = Month;
                TmpYear = Year;
                printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
            }
        }

        else {
            if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10) {
                if (Day > 0 && Day < 32) {
                    if (Day == 31) {
                        TmpDate = 1;
                        TmpMonth = ++Month;
                        TmpYear = Year;

                        printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
                    }

                    else {
                        TmpDate = ++Day;
                        TmpMonth = Month;
                        TmpYear = Year;

                        printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
                    }
                }
            }

            else if (Month == 12) {
                if (Day > 0 && Day < 32) {
                    if (Day == 31) {
                        TmpDate = 1;
                        TmpMonth = 1;
                        TmpYear = ++Year;

                        printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
                    }
                }
            }
        }
    }

    else {
        if (Month == 2) {
            if (Day > 28) {
                printf("This is not a valid date\n");
            }

            else if (Day == 28) {
                TmpDate = 1;
                TmpMonth = ++Month;
                TmpYear = Year;
                printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
            }
            

            else {
                TmpDate = ++Day;
                TmpMonth = Month;
                TmpYear = Year;
                printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
            }
        }

        else {
            if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10) {
                if (Day > 0 && Day < 32) {
                    if (Day == 31) {
                        TmpDate = 1;
                        TmpMonth = ++Month;
                        TmpYear = Year;

                        printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
                    }

                    else {
                        TmpDate = ++Day;
                        TmpMonth = Month;
                        TmpYear = Year;

                        printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
                    }
                }
            }

            else if (Month == 12) {
                if (Day > 0 && Day < 32) {
                    if (Day == 31) {
                        TmpDate = 1;
                        TmpMonth = 1;
                        TmpYear = ++Year;

                        printf("Next date: %d/%d/%d\n", TmpDate, TmpMonth, TmpYear);
                    }
                }
            }
        }
    }
}

int main() {
    int Day, Month, Year;

    printf("Enter Day ,Month and Year: ");
    scanf("%d %d %d", &Day, &Month, &Year);

    CheckingFunction(Day, Month, Year);

    return 0;
}