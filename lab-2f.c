#include<stdio.h>
int main()
{
    int num, rev_num, n;
    printf("Enter the number to display the first digit ");
    scanf("%d", &num);
    while(num >10){
        rev_num += (num%10) ;
        num = num / 10;
        rev_num = rev_num *10;
    }
    printf("The first digit of given number is = %d", num);
    return 0;
}

