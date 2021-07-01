#include <stdio.h>
#include <string.h>
void main()
{
    char string_1[100], sing_char[1], *str;
    int i, N, count = 0;
    printf("Enter the string to find the number of character ");
    gets(string_1);
    printf("Enter the character to find number of times ");
    scanf("%c", sing_char);
    N = strlen(string_1);
    str = &sing_char;
    for (i = 0; i < N; i++)
        if(*str == string_1[i])
            count += 1;
    printf("The character was found %d times ", count);

}

