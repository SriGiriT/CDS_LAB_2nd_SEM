#include<stdio.h>
#include<string.h>
int main(){
    char string[50], character[50];
    printf("Enter the string ");
    scanf("%s", string);
    for(int x;string[x] != '\0';x++){
        if(string[x] != 'a' && string[x] != 'e' && string[x] != 'i' && string[x] != 'o' && string[x] != 'u' && string[x] != 'A' && string[x] != 'E' && string[x] != 'I' && string[x] != 'O' && string[x] != 'U' )
            printf("%c", string[x]);
    }
}

