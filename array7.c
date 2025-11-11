#include <stdio.h>
int main() {
    int arr[10], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    n--;
    printf("\nArray after deleting last element: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
