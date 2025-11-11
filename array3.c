#include <stdio.h>
int main() {
    int arr[10];
    int i, j;
    printf("Enter 10 elements into the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int visited[10];
    for (i = 0; i < 10; i++) {
        visited[i] = 0;
    }
    printf("\nFrequency of each number:\n");
    for (i = 0; i < 10; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}