#include<stdio.h>
int main(){
    int r,c,max;
    int a[100][100];
    printf("Enter the number of row and column of the matrix ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix\n");
    for(int i = 0 ; i<r;i++)
        for(int j= 0;j<c;j++)
            scanf("%d", &a[i][j]);
    printf("The max element of column given matrix are \n");
    for(int i = 0 ; i<r;i++){
    max = a[0][0];
        for(int j= 0;j<c;j++){
            if(max<a[j][i])
                max = a[j][i];
        }
        printf("%d ", max);
    }
}
