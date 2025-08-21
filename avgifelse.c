#include <stdio.h>
int main() 
{
    float sub1, sub2, sub3, total, avg;
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Result: Fail (Less than 35 in at least one subject)\n");
    } else {
        total = sub1 + sub2 + sub3;
        avg = total / 3;
        printf("Total Marks: %f\n", total);
        printf("Average Marks: %f\n", avg);
        if (avg >= 70) {
            printf("Grade: Distinction\n");
        } else if (avg >= 60) {
            printf("Grade: First Class\n");
        } else if (avg >= 50) {
            printf("Grade: Second Class\n");
        } else if (avg >= 35) {
            printf("Grade: Third Class\n");
        } else {
            printf("Grade: Fail\n");
        }
    }
         return 0;
}