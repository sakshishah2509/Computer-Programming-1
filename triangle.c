#include <stdio.h>
int main()
{
    float h,a,l;
    printf("Enter the value of height:",h);
    scanf("%f",&h);
    printf("Enter the value of length:",l);
    scanf("%f",&l);
    a=h*l/2;
    printf("The area of triangle is:%f",a);
}