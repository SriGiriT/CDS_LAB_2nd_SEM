#include<stdio.h>
int main(){
    int i;
    printf("Enter the number to check for positive, negative or zero ");
    scanf("%d", &i);
    number_is(i);
}
void number_is(int x){
    if(x>0)
        printf("The given number %d is Positive ", x);
    else if(x<0)
        printf("The given number %d is Negative ", x);
    else
        printf("The given number %d is Zero", x);
    
}


