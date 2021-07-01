#include<stdio.h>
int main(){
   FILE *fi;
   char sing_char;
   fi = fopen("newone.txt", "r");
   do{
    sing_char = getc(fi);
    putchar(sing_char);
   }while(sing_char != EOF);
   fclose(fi);
   return 0;
}
