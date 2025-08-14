#include <stdio.h>
int main()
{
float kgs,gms;
printf("enter the amount of kilograms:",kgs);
scanf("%f",&kgs);
gms=kgs*1000;
printf("%fkilograms=%fgrams",kgs,gms);
}