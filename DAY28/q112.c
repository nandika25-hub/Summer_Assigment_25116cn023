#include <stdio.h>

int main() {
    char name[50];
    long long phone;
    int choice;

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", name);
                printf("Enter Phone Number: ");
                scanf("%lld", &phone);
                printf("Contact Saved Successfully!\n");
                break;

            case 2:
                printf("\nSaved Contact:\n");
                printf("Name : %s\n", name);
                printf("Phone: %lld\n", phone);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}