#include <stdio.h>
int main() {
    int start, end, n, temp, rem, sum;
    printf("Enter starting no: ");
    scanf("%d", &start);
    printf("Enter ending no: ");
    scanf("%d", &end);
    printf("Armstrong no are:\n");
    for(n = start; n <= end; n++) {

        temp = n;
        sum = 0;

        while(temp != 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == n)
            printf("%d ", n);
    }

    return 0;
}