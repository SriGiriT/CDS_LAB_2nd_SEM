#include<stdio.h>
int main(){
    FILE *fi1,*fi2;
    char sing_char;
    fi1 = fopen("newone.txt", "r");
    fi2 = fopen("newsecond.txt", "w");
    do{
        sing_char = getc(fi1);
        putc(sing_char, fi2);
    }while(sing_char != EOF);
    fclose(fi1);
    fclose(fi2);
    printf("The content of file was copied ");
}
