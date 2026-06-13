#include <stdio.h>

int main() {
    int a[5], i, even = 0, odd = 0;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d", odd);

    return 0;
}