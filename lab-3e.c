#include<stdio.h>
int main(){
    int dec_num, result;
    printf("Enter the decimal number to convert into binary number : ");
    scanf("%d", &dec_num);
    result = binary(dec_num);
    printf("%d", result);
}
int binary(int x){
    if(x==0)
        return 0;
    else
        return ((x%2) + (10*binary(x/2)));
}

