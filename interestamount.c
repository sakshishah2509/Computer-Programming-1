#include <stdio.h>
int main()
{
float p,r,n,i;
printf("enter the value of principal amount:",p);
scanf("%f",&p);
printf("enter the value of rate of interest:",r);
scanf("%f",&r);
printf("enter the value of time period:",n);
scanf("%f",&n);
i=p*r*n/100;
printf("the interest amount =%f",i);
}