#include<stdio.h>
int main()
{
    int a, per_a, i;
    per_a = 1;
    printf("Enter the number to find it's perfect or not ");
    scanf("%d", &a);
    for(i=2;i<a;i++)
    {
        if(a%i == 0)
            per_a = per_a + i;
    }
    if(a == per_a)
        printf("The given number %d is perfect number ", a);
    else
        printf("The given number %d is not a perfect number ", a);
    return 0;
}

