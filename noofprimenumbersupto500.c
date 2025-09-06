#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int count = 0;
    printf("Prime numbers between 1 and 500:\n");
    for (int i = 2; i <= 500; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal prime numbers between 1 and 500: %d\n", count);
    return 0;
}