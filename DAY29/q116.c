#include <stdio.h>

int main() {
    int choice, quantity = 100, add, remove;

    do {
        printf("\n===== Inventory Management =====\n");
        printf("1. View Stock\n");
        printf("2. Add Stock\n");
        printf("3. Remove Stock\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Stock = %d\n", quantity);
                break;

            case 2:
                printf("Enter quantity to add: ");
                scanf("%d", &add);
                quantity += add;
                printf("Stock Updated Successfully!\n");
                break;

            case 3:
                printf("Enter quantity to remove: ");
                scanf("%d", &remove);

                if (remove <= quantity) {
                    quantity -= remove;
                    printf("Stock Updated Successfully!\n");
                } else {
                    printf("Insufficient Stock!\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}