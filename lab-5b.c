#include<stdio.h>
struct students
{
    int m1, m2, m3, m4, m5, total;
}mark[100];

int main(){
    int N,i;
    printf("Enter the number of students ");
    scanf("%d", &N);
    for(i=0;i<N;i++){
        printf("Enter the marks of student no %d ", i+1);
        scanf("%d%d%d%d%d", &mark[i].m1,&mark[i].m2,&mark[i].m3,&mark[i].m4,&mark[i].m5);
        mark[i].total = mark[i].m1 + mark[i].m2 + mark[i].m3 + mark[i].m4 + mark[i].m5;
    }
    int rank1=0, rank2=0, rank3=0,j,k,max1,max2,max3 ;
    for(k=0;k<N;k++){
                if(rank1<mark[k].total){
                    rank1 = mark[k].total;
                    max1 = k;
                }
            }
    for(j=0;j<N;j++){
        if(rank2<mark[j].total && j!= max1){
            rank2 = mark[j].total;
            max2 = j;
        }
        }
    for(i=0;i<N;i++){
        if(rank3<mark[i].total && i != max2 && i != max1){
            rank3 = mark[i].total;
            max3 = i;
        }
    }
        printf("The student no %d scored first rank with total marks of %d ", max1+1,rank1);
        printf("\nThe student no %d scored second rank with total marks of %d ", max2+1,rank2);
        printf("\nThe student no %d scored third rank with total marks of %d ", max3+1,rank3);
}