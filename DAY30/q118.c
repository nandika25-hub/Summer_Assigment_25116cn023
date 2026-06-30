#include <stdio.h>

int main() {
    int choice;
    char book[50];
    int id;

    do {
        printf("\n===== Mini Library =====\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book);

                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &id);

                printf("Book Found (Demo).\n");
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}