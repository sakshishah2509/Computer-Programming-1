#include <stdio.h>
int main() {
    int src[5] = {10, 20, 30, 40, 50};
    int dest[10];
    int i, j = 0;
    printf("Source array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", src[i]);
    printf("\n");
    for(i = 0; i < 5; i++) {
        if(i == 2)
            continue;
        dest[j++] = src[i];
    }
    while(j < 10)
        dest[j++] = 0;
    printf("Destination array: ");
    for(i = 0; i < 10; i++)
        printf("%d ", dest[i]);
    printf("\n");
    return 0;
}
