#include <stdio.h>
int main() {
    int n, factorial = 1, i = 1;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    do {
        factorial *= i;
        i++;
    } while (i <= n);

    printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}
