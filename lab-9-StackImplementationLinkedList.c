#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int choice,element;
    struct Node *top = NULL,*neww,*temp;
    do
    {
        printf("Enter\n1 ---> Push a data\n2 ---> Pop a data\n3 ---> Display the Stack\n");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:
                printf("Enter the value of data to push ");
                scanf("%d", &element);
                neww=(struct Node*)malloc(sizeof(struct Node));
                neww -> data = element;
                neww -> next = NULL;
                if(top == NULL)
                {
                    top = neww;
                    temp = top;
                }
                else
                {
                    neww -> next = top;
                    top = neww;
                }
           break;
           case 2:
                 if(top == NULL)
                   printf("Stack is underflow\n");
                 else
                 {
                     temp = top;
                     top = temp -> next;
                     free(temp);
                 }
           break;
           case 3:
                 if(top == NULL)
                 {
                     printf("Stack is Empty\n");
                 }
                 else{
                 temp = top;
                 while(temp != NULL){
                    printf("%d\n",temp -> data);
                    temp = temp -> next;
                 }
                 }
           break;
        }
    }while(choice <= 3);
    return 0;
}

