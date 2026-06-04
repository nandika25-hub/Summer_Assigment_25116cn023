#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    if(n == 1)
        printf("nth Fibonaci number = %d", a);
    else if(n == 2)
        printf("nth Fibonaci number = %d", b);
    else {
        for(i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        printf("Nth Fibonaci number = %d", c);
    }

    return 0;
}