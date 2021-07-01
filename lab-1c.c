#include <stdio.h>

int main()
{
    float mark1,mark2,mark3,mark4,mark5; 
    float total, average, percentage;
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &mark1, &mark2, &mark3, &mark4, &mark5);
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = (total / 500.0) * 100;
    printf("Total marks   : %.2f\n", total);
    printf("Percentage    : %.2f", percentage);
    return 0;
}
