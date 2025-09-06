#include <stdio.h>
int main() {
    int numbers[200];
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    int i;
    printf("Enter 200 integer values:\n");
    for (i = 0; i < 200; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 200; i++) {
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    printf("\n--- Counts ---\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);
    return 0;
}