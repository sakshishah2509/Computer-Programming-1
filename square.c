#include <stdio.h>
int main()
{
    float l,a,p;
    printf("Enter the value of length:",l);
    scanf("%f",&l);
    a=l*l;
    printf("The area of square of length %f=%f\n",l,a);
    p=4*l;
    printf("The perimeter of square of length %f=%f",l,p);
}