#include<stdio.h>
int main(){
    char string_1[100], string_2[100];
    int st_1, st_2, str_1=0, str_2=0;
    printf("Enter the first string ");
    gets(string_1);
    printf("Enter the second string ");
    gets(string_2);
    for(int i = 0; string_1[i] != '\0';i++){
            st_1 = string_1[i];
            st_2 = string_2[i];
            if(st_1 > st_2){
                str_1++;
                break;}
            else if(st_1<st_2){
                str_2++;
                break;}
        }
    if(str_1>str_2)
        printf("String 1 is greater than 2 ");
    else if(str_1<str_2)
        printf("String 2 is greater than 1 ");
    else
        printf("String 1 is equal to String 2 ");
}
