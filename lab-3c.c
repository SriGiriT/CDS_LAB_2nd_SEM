#include<stdio.h>
int main(){
    int a, count;
    printf("Enter the number to find the number of factors ");
    scanf("%d", &a);
    count = factors(a);
    printf("The number of factors(except 1 and %d) of %d is %d ", a, a, count);
    return 0;
}
int factors(int x){
    int i, fac_count = 0;
    for(i=2;i<x;i++){
        if(x%i == 0)
            fac_count++;
    }
    return fac_count;
}

