#include <stdio.h>

int main() {
    int choice;
    char book[50];
    int bookID;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookID);
                printf("Enter Book Name: ");
                scanf(" %[^\n]", book);
                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("Enter Book ID to Search: ");
                scanf("%d", &bookID);
                printf("Book Found (Demo).\n");
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}