#include <stdio.h>
int main()
{
    int i;
printf("Numbers divisible by 13 in the range of 1 to 100:\n");
for (i = 1; i <= 100; i++) 
{
if (i % 13 == 0) 
{
printf("%d\n", i);
}
}
 return 0;
}