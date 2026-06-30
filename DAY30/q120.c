#include <stdio.h>

void display(int roll[], char name[][50], float marks[], int n);

int main() {
    int n, i;
    int roll[50];
    char name[50][50];
    float marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    display(roll, name, marks, n);

    return 0;
}

void display(int roll[], char name[][50], float marks[], int n) {
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("Roll No : %d\n", roll[i]);
        printf("Name : %s\n", name[i]);
        printf("Marks : %.2f\n\n", marks[i]);
    }
}