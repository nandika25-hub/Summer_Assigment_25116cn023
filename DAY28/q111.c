#include <stdio.h>

int main() {
    int seats = 10, booked, choice;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &booked);

                if (booked <= seats) {
                    seats -= booked;
                    printf("Booking Successful!\n");
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", seats);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}