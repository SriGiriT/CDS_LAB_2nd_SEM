#include<stdio.h>
int main(){
    int N, a[100], rem, ind_rem;
    printf("Enter the number of elements of the array ");
    scanf("%d", &N);
    printf("Enter the elements of array ");
    for(int i= 0; i<N;i++)
        scanf("%d", &a[i]);
    printf("Enter the element do you want to remove from the array ");
    scanf("%d", &rem);
    for(int i= 0; i<N;i++)
        if(a[i] == rem)
            ind_rem =  i;
    for(int i= ind_rem; i<N-1;i++)
        a[i] = a[i+1];
    for(int i=0;i<N-1;i++)
        printf("%d ", a[i]);
}

