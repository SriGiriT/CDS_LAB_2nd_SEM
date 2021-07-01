#include<stdio.h>
int main(){
    char name[100], depart[100];
    int roll_no, age, height;
    long int mobile_no;
    printf("Enter the name, department, roll no, age, height, mobile number :");
    gets(name);
    gets(depart);
    scanf("%d%d%d%ld", &roll_no,&age,&height,&mobile_no);
    printf("\nName         :%s", name);
    printf("\nDepartment   :%s", depart);
    printf("\nRoll no      :%d", roll_no);
    printf("\nAge          :%d", age);
    printf("\nHeight       :%d", height);
    printf("\nmobile number:%ld", mobile_no);
}
