#include<stdio.h>
int main()
{   char sing_char;
    FILE *fi;
    int count_spaces = 0, count_lines=1;
    fi = fopen("sample.txt","r");
    do{
        sing_char = getc(fi);
        if(sing_char == ' ' || sing_char == '\n')
            count_spaces++;
        if(sing_char == '\n')
            count_lines++;
    }while(c!=EOF);
    printf("NO OF words %d\n", count_spaces);
    printf("NO OF lines %d", count_lineslines);
    fclose(fi);
    return 0;
}

