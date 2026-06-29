#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n===== String Operations =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Display String\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char rev[100];
                strcpy(rev, str);
                strrev(rev);
                printf("Reversed String = %s\n", rev);
                break;
            }

            case 3:
                printf("String = %s\n", str);
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