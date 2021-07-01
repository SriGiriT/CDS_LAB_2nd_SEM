#include<stdio.h>
int main(){
    char string[100];
    int temp = 0;
    printf("Enter the string ");
    scanf("%[^\n]s",string);
    printf("The string without extra spaces\n");
    for(int x=0; string[x] != '\0'; x++){
        if(string[x] != ' '){
            printf("%c", string[x]);
            temp = 1;
        }
        else if(temp == 1 && string[x] == ' '){
            printf(" ");
            temp = 0;
        }
    }
}

