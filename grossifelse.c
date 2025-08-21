#include <stdio.h>
int main() 
{
    float g,a,d,n;
    printf("Enter Gross Salary: ");
    scanf("%f", &g);
    if (g > 10000) {
        a = 0.1 * g;
        d = 0.03 * g;
    } else {
        a = 0.05 * g;
        d = 0.01 * g;
    }
    n= g + a - d;
    printf("Allowances: %f\n", a);
    printf("Deductions: %f\n", d);
    printf("Net Salary: %f\n", n);

    return 0;
}