#include<stdio.h>
struct Node
{
 int data;
 struct Node *next;
};
int main()
{
    struct Node *front = NULL, *rear = NULL, *neww, *temp;
    int choice, ele;
    do{
        printf("\nEnter\n1 ---> Enqueue \n2 ---> Dequeue \n3 ---> Display\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            neww = (struct Node*)malloc(sizeof(struct Node ));
            printf("Enter the data ");
            scanf("%d",&ele);
            neww -> data = ele;
            neww -> next = NULL;
            if(front == NULL){
                front = neww;
                rear = neww;
            }
            else{
                rear -> next = neww;
                rear = neww;
            }
            break;
        case 2:
            if(front == NULL)
                printf("Queue is empty ");
            else{
                if(front == rear){
                    front = NULL;
                    rear = NULL;
                }
                else{
                    temp = front;
                    front = front -> next;
                    free(temp);
                }
            }
            break;
        case 3:
            if(front == NULL)
                printf("Queue is empty ");
            else{
                temp = front;
            while(temp != NULL){
                printf("%d-->",temp -> data);
                temp = temp -> next;
            }
            }
            break;
        default:
            printf("Enter the correct choice ");
        }
        }while(choice <= 3);
    return 0;
}
