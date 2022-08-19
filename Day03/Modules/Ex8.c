//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>

void DayOfWeek(int Day, int Month, int Year) {
    int DayOfWeek = Day + (2 * Month) + ((3 * (Month + 1)) / 5) + Year + (Year / 4) - (Year / 100) + (Year / 400) + 2;

    if (Day > 0 && Day < 31) {
        if (Month > 0 && Month < 12) {
            if (Year > 0) {
                printf("Day of week: %d", DayOfWeek);
                printf("Year: %d", Year);
                printf("Month: %d", Month);
                printf("Day: %d", Day);
            }
        }

        else {
            printf("Error: Month must be between 1 and 12");
        }
    }

    else {
        printf("Error: Day Value out of range");
    }
}

int main() {
    int Day, Month, Year;

    printf("Enter Day, Month and Year: ");
    scanf("%d %d %d", &Day, &Month, &Year);

    DayOfWeek(Day, Month, Year);

    return 0;
}