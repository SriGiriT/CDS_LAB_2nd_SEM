#include<stdio.h>
int main()
{
    int i;
    char a;
    printf("Enter the character to check it is the alphabet, digit or special character ");
    scanf("%c", &a);
    i = a;
    if(49<=i && i <=57)
        printf("The entered character is digit = %c",  i);
    else if(65<=i && i<=90 || 97<=i && i<=122)
        printf("The entered character is alphabet = %c", i);
    else if( 58<=i&&i<= 64 || 91<=i &&i<=96 || 123<=i && i<=127 )
        printf("The entered character is special character = %c ",i);
    return 0;
}
