#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to find positive,negative or zero");
    scanf("%d", &a);
    if(a>0)
        printf("The given number is POSITIVE Number ");
    else if(a<0)
        printf("The given number is NEGATIVE Number ");
    else
        printf("The given number is ZERO");
    return 0;
}

