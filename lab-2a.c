#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5,i;
    float total, percentage;
    printf("Enter you marks in order >> ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    if(m1>50 && m2>50 && m3>50 && m4>50 && m5>50)
    {
        printf("Congratulations!!!, you passed your exams\n");
        printf("You got %.2f out of 500 \n", total);
        printf("Your percentage is %.2f ", percentage);
    }
    else{
        printf("Sorry, you failed.");
        printf("You got %.2f out of 500 \n", total);
        printf("Your percentage is %.2f \n", percentage);
        if(m1<50)
            printf("You failed in subject number 01\n");
        if(m2<50)
            printf("You failed in subject number 02\n");
        if(m3<50)
            printf("You failed in subject number 03\n");
        if(m4<50)
            printf("You failed in subject number 04\n");
        if(m5<50)
            printf("You failed in subject number 05\n");
    }
    return 0;
}
