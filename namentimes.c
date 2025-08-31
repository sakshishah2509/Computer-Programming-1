#include <stdio.h>
int main() 
{
    char name[] = "Sakshi Shah";
    int i,n;
    printf("Enter the number of times you want to print your name:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("%s\n", name);
    }
}