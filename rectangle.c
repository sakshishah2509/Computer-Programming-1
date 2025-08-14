#include <stdio.h>
int main()
{
    float l,b,a,p,m;
    printf("Enter the value of length:",l);
    scanf("%f",&l);
    printf("Enter the value of length:",b);
    scanf("%f",&b);
    a=l*b;
    printf("The area of rectangle is:%f\n",a);
    m=l+b;
    p=m*2;
    printf("The perimeter of rectangle is:%f",p);
}