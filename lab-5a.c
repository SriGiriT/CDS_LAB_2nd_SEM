#include<stdio.h>
struct marks{
    int roll_no;
    long int mobile_no;
    char name[100], department[100];
}stu[100];
int main(){
    int N;
    printf("Enter the number of students ");
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        printf("Enter the name , reg:no, department and mobile number of student number %d ", i+1);
        scanf("%s%d%s%ld", stu[i].name,&stu[i].roll_no,stu[i].department,&stu[i].mobile_no);
    }
    for(int i = 0;i<N;i++){
        printf("\ninformation of student no %d ", i+1);
        printf("\nName                  :               %s", stu[i].name);
        printf("\nReg:No                :               %d", stu[i].roll_no);
        printf("\nDepartment            :               %s", stu[i].department);
        printf("\nMobile:No             :               %ld", stu[i].mobile_no);
    }
}

