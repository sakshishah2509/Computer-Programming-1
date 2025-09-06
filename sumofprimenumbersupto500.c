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
    int sum = 0;
    for (int i = 2; i <= 500; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    printf("Sum of all prime numbers between 1 and 500: %d\n", sum);
    return 0;
}