#include <stdio.h>
int main()
{
    int i,n;
printf("Enter the value of n upto which numbers are to be added:");
scanf("%d",&n);
printf("The sum of first %d natural numbers is:%d",n,n*(n+1)/2);
    return 0;
}