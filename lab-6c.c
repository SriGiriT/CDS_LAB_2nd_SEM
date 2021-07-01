#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1, *f2;
    char char_f1;
    int constant = 1;
    f1 = fopen("sample11.txt", "r");
    f2 = fopen("sample22.txt", "w");
    while (char_f1 != EOF){
        char_f1 = getc(f1);
        if (constant == 0)
            putc(char_f1, f2);
        if(constant == 1)
        {
            putc(char_f1-32, f2);
            constant = 0;
        }
        if (char_f1 == ' ')
            constant = 1;
    }
    fclose(f1);
    fclose(f2);
}

