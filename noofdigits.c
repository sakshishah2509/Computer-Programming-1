#include <stdio.h>
int main() {
    int num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } else {
        int temp_num = num; 
        while (temp_num != 0) {
            temp_num /= 10;
            count++;
        }
    }
    printf("The number of digits in %d is: %d\n", num, count);
    return 0;
}