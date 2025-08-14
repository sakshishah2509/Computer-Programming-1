#include <stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter the marks of subject1:",a);
    scanf("%d",&a);
    printf("Enter the marks of subject2:",b);
    scanf("%d",&b);
    printf("Enter the marks of subject3:",c);
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("The total marks of the three subjects=%d\n",sum);
    printf("The average of the marks of the three subjects=%f",avg);
}