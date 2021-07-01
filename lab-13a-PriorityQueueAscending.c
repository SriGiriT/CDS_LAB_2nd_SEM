#include<stdio.h>
struct Node{
    int data;
    int priority;
    struct Node *next;
};
int main(){
    struct Node *front = NULL, *neww, *temp;
    int choice, element, input_priority;
    do{
      printf("\nEnter\n1 ---> Insertion\n2 ---> Deletion\n3 ---> Display\n");
      scanf("%d", &choice);
      switch(choice){
         case 1:
                 neww = (struct Node*)malloc(sizeof(struct Node));
                 printf("Enter the Data and Priority(with space in between) --> ");
                 scanf("%d%d", &element, &input_priority);
                 neww -> data = element;
                 neww -> priority = input_priority;
                 neww -> next = NULL;
                 if(front == NULL)
                 {
                     front = neww;
                     temp = neww;
                 }
                 else
                 {
                     neww -> next = front;
                     front = neww;
                     temp = front;
                     while(temp -> next != NULL){
                         if(temp -> priority > temp -> next -> priority){
                             int dat = temp -> data;
                             int pri = temp -> priority;
                             temp -> data = temp -> next -> data;
                             temp -> priority= temp -> next -> priority;
                             temp -> next -> data = dat;
                             temp -> next -> priority = pri;
                         }
                         temp = temp -> next;
                     }
                }
         break;
         case 2:
             if(front == NULL){
                 printf("Queue is empty");
             }
             else{
                temp = front;
                front =temp -> next;
                free(temp);
                printf("First element of the queue was deleted ");
             }
         break;
         case 3:
             if(front == NULL)
                printf("Queue is empty");
             else{
                temp = front;
                printf("DATA   PRIORITY (in ascending order) ");
                while(temp != NULL){
                    printf("\n %d      %d ",temp -> data, temp -> priority);
                    temp = temp -> next;
                }
             }
         break;
      }
    }while(choice <= 3);
    return 0;
}