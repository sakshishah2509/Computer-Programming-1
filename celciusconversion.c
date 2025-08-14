#include <stdio.h>
int main()
{
    float c,f,m;
    printf("Enter the value of celcius:",c);
    scanf("%f",&c);
    m=9*c/5;
    f=m+32;
    printf("%fcelcius=%ffahrenheit",c,f);
}