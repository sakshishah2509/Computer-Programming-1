#include <stdio.h>
int main() {
    int arr[10], n, num, i;
    printf("Enter number of elements (max 9): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to insert at the beginning: ");
    scanf("%d", &num);
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
