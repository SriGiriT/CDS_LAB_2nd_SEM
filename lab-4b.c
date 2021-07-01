#include<stdio.h>
int main(){
    int N, min, temp;
    printf("Enter the number of elements of array ");
    scanf("%d", &N);
    int a[100];
    printf("Enter the elements of array ");
    for(int i=0; i<N;i++){
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(int i=0;i<N;i++){
        if(min>a[i])
            min = a[i];        
    }
    for (int i = 0; i < N; i++) {     
        for (int j = i+1; j < N; j++) {     
            if(a[i] > a[j]) {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;    
            }     
        }     
    }    
    for(int i = 0; i<N;i++){
        if(min != a[i]){
            printf("The number missed in the array was %d", a[i]-1);
            break;
    }
    min++;
    }
}

