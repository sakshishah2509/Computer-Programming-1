#include <stdio.h>
int isAutomorphic(int num) {
    long long square = (long long)num * num;
    while (num > 0) { 
            if (num % 10 != square % 10) {
            return 0;
        }
        num /= 10;
        square /= 10;
    }
    return 1;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isAutomorphic(number)) {
        printf("%d is an Automorphic Number.\n", number);
    } else {
        printf("%d is not an Automorphic Number.\n", number);
    }
    return 0;
}