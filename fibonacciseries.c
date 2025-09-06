#include <stdio.h>
int main() {
    int n, a = 0, b = 1, nextTerm, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms:\n", n);
    if (n <= 0) {
        printf("Please enter a positive number of terms.\n");
    } else if (n == 1) {
        printf("%d\n", a);
    } else {
        printf("%d, %d", a, b);
        for (i = 3; i <= n; i++) {
            nextTerm = a + b;
            printf(", %d", nextTerm);
            a = b;
            b = nextTerm;
        }
        printf("\n");
    }
    return 0;
}