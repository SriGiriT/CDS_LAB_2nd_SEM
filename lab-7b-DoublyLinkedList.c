#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
int main(){
    int choice, N, element, count, total_count=0;
    struct Node *head = NULL, *neww, *temp, *prev, *temp2, *temp3;
    do{
        printf("\nEnter ");
        printf("\n1 ---->  Creation");
        printf("\n2 ---->  Display");
        printf("\n3 ---->  Insertion at first");
        printf("\n4 ---->  Insertion at middle");
        printf("\n5 ---->  Insertion at last");
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
                neww -> prev = NULL;
                if(head == NULL){
                    head = neww;
                    temp = head;
                }
                else{
                    temp -> next = neww;
                    neww -> prev = temp;
                    temp = neww;
                }
                total_count++;
                printf("--> ");
                scanf("%d", &N);
        }
            break;
        case 2:
            temp = head;
            while (temp != NULL)
            {
                printf("%d<=>", temp-> data);
                temp = temp ->next;
            }
            printf("NULL");
            break;
        case 3:
            printf("Enter the number to insert ");
            scanf("%d", &N);
            neww = (struct Node*)malloc(sizeof(struct Node));
            neww -> data = N;
            neww -> next = NULL;
            neww -> prev = NULL;
            temp = head;
            neww -> next = head;
            head -> prev = neww;
            head = neww;
            break;
        case 4:
            printf("Enter the number to insert ");
            scanf("%d", &N);
            neww = (struct Node*)malloc(sizeof(struct Node));
            neww -> data = N;
            neww -> next = NULL;
            neww -> prev = NULL;
            printf("the element insert after ");
            scanf("%d", &element);
            temp = head;
            while(temp->next != NULL){
                if(temp -> data == element)
                    break;
                temp = temp->next;
            }
            temp2 = temp -> next;
            temp -> next = neww;
            neww -> prev = temp;
            neww -> next = temp2;
            temp2 -> prev = neww;
            break;
        case 5:
            printf("Enter the number to insert ");
            scanf("%d", &N);
            neww = (struct Node*)malloc(sizeof(struct Node));
            neww -> data = N;
            neww -> next = NULL;
            neww -> prev = NULL;
            temp = head;
            while(temp->next != NULL)
                temp = temp -> next;
            temp -> next = neww;
            neww -> prev = temp;
            break;
        case 6:
            temp = head;
            head = head -> next;
            head -> prev = NULL;
            free(temp);
            break;
        case 7:
            printf("Enter the element to be deleted ");
            scanf("%d", &element);
            temp = head;
            while(temp -> next != NULL){
                if(temp -> data == element)
                    break;
                temp = temp -> next;
            }
            temp2 = temp -> prev;
            temp3 = temp -> next;
            temp2 -> next = temp3;
            temp3 -> prev = temp2;
            free(temp);
            break;
        case 8:
            temp = head;
            while(temp -> next != NULL)
                temp = temp -> next;
            temp2 = temp -> prev;
            temp2 -> next = NULL;
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

