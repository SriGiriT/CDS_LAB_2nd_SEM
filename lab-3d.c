#include<stdio.h>
int main(){
    int a;
    printf("Enter the number to get the sum of the digits up to a single value ");
    scanf("%d", &a);
    int sum = sumdigits(a);
    if(sum <10){
        sum = sum;
    }
    else
        sum = sumdigits(sum);
    printf("The sum of digits in the number %d is %d", a, sum);
    return 0;
}
int sumdigits(int x){
    int sum_1 = 0;
    while(x>10){
        sum_1 += x%10;
        x /= 10;
    }
    sum_1 += x;
    return sum_1;
}
