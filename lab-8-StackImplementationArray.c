#include<stdio.h>
#define Size 100
int main()
{
    int stack_array[Size];
    int top = -1, choice, element;
    do
    {
        printf("\nEnter\n1 ---> Push a data\n2 ---> Pop a data\n3 ---> Display the Stack\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                if(top == Size-1)
                    printf("Stack is overflow\n");
                else
                {
                    printf("Enter the element to push into Stack ");
                    scanf("%d", &element);
                    stack_array[++top] = element;
                }
           break;
           case 2:
                if(top == -1)
                    printf("Stack is underflow\n");
                else
                {
                    printf("The element popped from the list was %d", stack_array[top]);
                    top --;
                }
           break;
           case 3:
                 if(top == -1)
                     printf("Stack is Empty\n");
                 else{
                    for(int i = top;i >= 0; i--)
                        printf("\n%d", stack_array[i]);
                 }
           break;
        }
    }while(choice <= 3);
    return 0;
}
