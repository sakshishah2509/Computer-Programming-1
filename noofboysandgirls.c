#include <stdio.h>
int main() {
    int n = 50;
    int i, sexCode;
    int boys = 0, girls = 0;
    printf("Enter sex code for %d students (1 = Boy, 2 = Girl):\n", n);
    for (i = 1; i <= n; i++) {
        printf("Student %d: ", i);
        scanf("%d", &sexCode);
        if (sexCode == 1) {
            boys++;
        } 
        else if (sexCode == 2) {
            girls++;
        } 
        else {
            printf("Invalid input! Please enter 1 or 2.\n");
            i--;
        }
    }
    printf("\nTotal Boys = %d\n", boys);
    printf("Total Girls = %d\n", girls);
    return 0;
}