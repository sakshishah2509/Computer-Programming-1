#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of even numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        sum += (2 * i);
    }
    printf("The sum of the first %d even numbers is: %d\n", n, sum);
    return 0;
}