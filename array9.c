#include <stdio.h>.
int main() {
    int arr[10], n, value, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the value to delete: ");
    scanf("%d", &value);
    for(i = 0; i < n; i++) {
        if(arr[i] == value) {
            for(j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
            found = 1;
        }
    }
    if(!found)
        printf("Value not found in array.\n");
    else {
        printf("Array after deleting value %d: ", value);
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
