#include<stdio.h>
#include<ctype.h>

int stack[100], top = -1;

void push(int);
int pop();

void main()
{
    char exp[20];
    char *str_1;
    int num0,num1,num2,num4;
    printf("\nEnter the postfix to find value ");
    scanf("%s",exp);
    str_1 = exp;
    while(*str_1 != '\0')
    {
        if(isdigit(*str_1))
        {
            num0 = *str_1 - 48;
            push(num0);
        }
        else
        {
            num1 = pop();
            num2 = pop();
            switch(*str_1)
            {
            case '+':
                num4 = num1 + num2;
                break;
            case '-':
                num4 = num2 - num1;
                break;
            case '*':
                num4 = num1 * num2;
                break;
            case '/':
                num4 = num2 / num1;
                break;
            }
            push(num4);

        }
        str_1++;

    }


    printf("\n%s  =  %d", exp, pop());
}

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

