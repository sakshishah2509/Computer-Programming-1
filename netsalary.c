#include <stdio.h>
int main()
{
    float g,a,d,n;
    printf("Enter the amount of gross salary:",g);
    scanf("%f",&g);
    a=g*10/100;
    d=g*3/100;
    n=g+a-d;
    printf("The amount of net salary is:%f",n);
}