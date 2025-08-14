#include <stdio.h>
int main()
{
float gms,kgs;
printf("enter the amount of grams:",gms);
scanf("%f",&gms);
kgs=gms/1000;
printf("%fgrams=%fkilograms",gms,kgs);
}