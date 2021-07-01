#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
int main(){
    int choice, N, element, count;
    struct Node *head = NULL, *neww, *temp, *prev;
    do{
        printf("\nEnter ");
        printf("\n1 ---->  Creation");
        printf("\n2 ---->  Display");
        printf("\n3 ---->  Insertion at first");
        printf("\n4 ---->  Instertion at middle");
        printf("\n5 ---->  Instersion at last");
        printf("\n6 ---->  Deletion at first");
        printf("\n7 ----> Delete at middle ");
        printf("\n8 ----> Delete at last ");
        printf("\n9 ----> Search\n");
        scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the element other than zero(and 0 to exit) ");
        scanf("%d", &N);
        while(N != 0)
        {
            neww = (struct Node*)malloc(sizeof(struct Node));
            neww -> data = N;
            neww -> next = NULL;
            if(head == NULL){
                head = neww;
                temp = neww;
            }
            else{
                temp -> next = neww;
                temp = neww;
            }
            printf("--> ");
            scanf("%d", &N);
    }
        break;
    case 2:
        temp = head;
        while (temp!=NULL)
        {
            printf("%d->", temp-> data);
            temp = temp ->next;
        }
        printf("NULL");
        break;
    case 3:
        printf("Enter the element to insert ");
        scanf("%d", &N);
        neww = (struct Node*)malloc(sizeof(struct Node));
        neww -> data =  N;
        neww -> next = head;
        head = neww;
        temp = head;
        break;
    case 4:
        printf("Enter the element to insert ");
        scanf("%d", &N);
        printf("Enter the insert the element after the element ");
        scanf("%d", &element);
        neww = (struct Node*)malloc (sizeof(struct Node));
        neww ->data = N;
        temp = head;
        while(temp !=NULL){
            if(temp->data == element)
                break;
            temp = temp-> next;
        }
            neww->next = temp->next;
            temp->next = neww;
        break;
    case 5:
        printf("Enter the element to insert ");
        scanf("%d", &N);
        neww = (struct Node*)malloc(sizeof(struct Node));
        neww -> data =  N;
        neww -> next = NULL;
        while(temp->next != NULL)
            temp = temp -> next;
        temp -> next = neww;
    case 6:
        temp = head;
        head = temp ->next;
    free(temp);
    break;
    case 7:
        temp = head;
        printf("Enter the deleting element ");
        scanf("%d", &element);
        while(temp->next != NULL ){
            if(temp->data == element)
                break;
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = temp -> next;
        break;
    case 8:
        temp = head;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = NULL;
        free(temp);
        break;
    case 9:
        temp = head;
        printf("Enter the element to search ");
        scanf("%d", &element);
        count = 1;
        while (temp != NULL)
        {
            if(temp -> data == element){
                printf("The element %d is found at %d ", temp->data, count);
                break;
            }
            count++;
            temp = temp->next;
        }
        if(temp == NULL)
            printf("The element not found ");
        break;
    default:
        printf("Enter the correct choice ");
        break;
    } 
    }while(choice<10);
}

