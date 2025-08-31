#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of odd terms: ");
    scanf("%d", &n);
    sum = n * n;
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}