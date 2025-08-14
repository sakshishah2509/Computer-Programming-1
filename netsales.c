#include <stdio.h>
int main()
{
    float g,d,n;
    printf("Enter the amount of gross sales:",g);
    scanf("%f",&g);
    d=g*10/100;
    n=g-d;
    printf("The amount of net sales is:%f",n);
}