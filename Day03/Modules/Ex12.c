//Import Lib
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>

#define CostRoomA 250000
#define CostRoomB 200000
#define CostRoomC 150000

void MoneyCalculator (int DayInHotel, char RoomChoose) {
    float CostRoom;
    
    if (DayInHotel > 0 ) {
        if (DayInHotel <= 12) {
            if (RoomChoose == 'A' || RoomChoose == 'a') {
                CostRoom = CostRoomA * DayInHotel;

                printf("Cost Room A = %0.1f\n", CostRoom);
            }

            else if (RoomChoose == 'B' || RoomChoose == 'b') {
                CostRoom = CostRoomB * DayInHotel;

                printf("Cost Room B = %0.1f\n", CostRoom);
            }

            else if (RoomChoose == 'C' || RoomChoose == 'c') {
                CostRoom = CostRoomC * DayInHotel;  

                printf("Cost Room C = %0.1f\n", CostRoom);
            }

            else {
                printf("Try to choose room again");
            }
        }

        if (DayInHotel > 12) {
            if (RoomChoose == 'A' || RoomChoose == 'a') {
                CostRoom = (CostRoomA * DayInHotel) - ((CostRoomA * DayInHotel) * 0.1);

                printf("Cost Room A = %0.1f\n", CostRoom);
            }

            else if (RoomChoose == 'B' || RoomChoose == 'b') {
                CostRoom = (CostRoomB * DayInHotel) - ((CostRoomB * DayInHotel) * 0.8);

                printf("Cost Room B = %0.1f\n", CostRoom);
            }

            else if (RoomChoose == 'C' || RoomChoose == 'c') {
                CostRoom = (CostRoomC * DayInHotel) - ((CostRoomC * DayInHotel) * 0.8);

                printf("Cost Room C = %0.1f\n", CostRoom);
            }

            else {
                printf("Try to choose room again");
            }
        }

        else {
            printf("Error: Unknown");
        }
    }

    else {
        printf("Are you kidding me? Try input number of days above zero.\n");
    }
}

int main() {
    int DayInHotel; 
    char RoomChoose;

    printf("Enter Type of Room: ");
    scanf("%c", &RoomChoose);
    printf("Enter Numbers of Day in Hotel: ");
    scanf("%d", &DayInHotel);

    MoneyCalculator(DayInHotel, RoomChoose);

    return 0;
}