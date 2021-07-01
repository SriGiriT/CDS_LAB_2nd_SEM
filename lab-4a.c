#include<stdio.h>
int main(){
    int x, max, n, sec_max;
    printf("Enter the number of elements in the array ");
    scanf("%d", &n);
    int i[n];
    printf("Enter the array to find second largest number in that array ");
    for(x=0;x<n;x++){
        scanf("%d", &i[x]);
    }
    max = i[1];
    sec_max = i[1];
    for(x=0;x<n;x++){
        if(max<i[x])
            max = i[x];
    }
    for(x=0;x<n;x++){
        if(sec_max<i[x] && max != i[x])
            sec_max = i[x];
    }
    printf("The second largest number in given array is %d ", sec_max);
}

