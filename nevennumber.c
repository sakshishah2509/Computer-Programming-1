#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of amount of even numbers that are to be printed:");
    scanf("%d",&n);
    printf("The first %d even natural numbers are:\n",n);
    for(i=2;i<=2*n;i+=2)
    {
    printf("%d\n",i);
    }
}