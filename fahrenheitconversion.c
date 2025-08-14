#include <stdio.h>
int main()
{
    float c,f,m;
    printf("Enter the value of fahrenheit:",f);
    scanf("%f",&f);
    m=f-32;
    c=m*5/9;
    printf("%ffahrenheit=%fcelcius",f,c);
}