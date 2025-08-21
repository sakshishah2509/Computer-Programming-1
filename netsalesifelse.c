#include <stdio.h>
int main() 
{
    float g,d,n;
    printf("Enter Gross Sales: ");
    scanf("%f", &g);
    if (g > 20000) {
        d = 0.15 * g;
    } else if (g > 10000) {
        d = 0.10 * g;
    } else {
        d = 0.05 * g;
    }
    n = g - d;
    printf("Discount: %f\n", d);
    printf("Net Sales: %f\n", n);
    return 0;
}