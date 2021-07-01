#include<stdio.h>
int main(){
    int a;
    printf("Enter the number to find it's perfect or not ");
    scanf("%d", &a);
    perfect(a);
    return 0;
}
void perfect(int x){
    int per_a = 1, i;
    for(i=2;i<x;i++)
    {
        if(x%i == 0)
            per_a = per_a + i;
    }
    if(x == per_a)
        printf("The given number %d is perfect number ", x);
    else
        printf("The given number %d is not a perfect number ", x);
}
