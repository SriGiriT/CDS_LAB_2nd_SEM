#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
        printf("a is greatest of all ");
    else if(b>a && b >c)
        printf("b is greatest of all");
    else if(c>a && c>b)
        printf("c is greatest of all");
    return 0;
}


