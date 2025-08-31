#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of amount of odd numbers that are to be printed:");
    scanf("%d",&n);
    printf("The first %d odd natural numbers are:\n",n);
    for(i=1;i<=2*n-1;i+=2)
    {
    printf("%d\n",i);
    }
}