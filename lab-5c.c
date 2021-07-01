#include<stdio.h>
int main(){
    int a[100], N,b[100];
    printf("Enter the number of elements of array ");
    scanf("%d", &N);
    printf("Enter the elements of array ");
    for(int i= 0 ; i < N; i++)
        scanf("%d", &*(a+i));
    for(int i=0;i<N;i++)
        *(b+i) = *(a+i);
    printf("The copied array was \n");
    for(int i=0;i<N;i++)
        printf("%d ", *(b+i));
}

