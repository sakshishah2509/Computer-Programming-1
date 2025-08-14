#include <stdio.h>
int main()
{
float bytes,kb,mb,gb;
printf("Enter the amount of bytes:",bytes);
scanf("%f",&bytes);
kb=bytes/1024;
printf("%fbytes=%fkilobytes\n",bytes,kb);
mb=kb/1024;
printf("%fkilobytes=%fmegabytes\n",kb,mb);
gb=mb/1024;
printf("%fmegabytes=%fgigabytes\n",mb,gb);
}