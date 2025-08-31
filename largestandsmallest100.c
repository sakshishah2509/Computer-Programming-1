#include <stdio.h>
int main() {
    int numbers[100];
    int largest, smallest;
    int i;
    printf("Enter 100 numbers:\n");
    for (i = 0; i < 100; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    largest = numbers[0];
    smallest = numbers[0];
    for (i = 1; i < 100; i++) 
    {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) 
        {
            smallest = numbers[i];
        }
    }
    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
}