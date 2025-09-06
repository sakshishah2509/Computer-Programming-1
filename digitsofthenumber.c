#include <stdio.h>
int main() {
    int num, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Digits of the number are: ");
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    int temp_num = num;

        while (temp_num > 0) {
        digit = temp_num % 10;
        printf("%d ", digit);
        temp_num /= 10;
    }
    printf("\n");
    return 0;
}