#include <stdio.h>
int main ()
{
    int i,n;
    printf("Enter the value of n upto which numbers are to be printed:");
    scanf("%d",&n);
    printf("The first %d natural numbers are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}