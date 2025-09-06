#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
        }
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    reversedNum *= sign;
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}