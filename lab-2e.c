#include<stdio.h>
int main()
{
    int num, rev_num, n;
    printf("Enter the number to get reverse of it ");
    scanf("%d", &num);
    while(num >10){
        rev_num += (num%10) ;
        num = num / 10;
        rev_num = rev_num *10;
    }
    rev_num += num;
    printf("%d", rev_num);
    return 0;
}