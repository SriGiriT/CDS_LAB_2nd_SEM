#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct node{
    int data;
    struct node *next;
};
struct node *head[SIZE]={NULL},*temp;
int main(){
    int choice,key,i,index;
    while(1){
        printf("\nEnter\n1 ---> Insert\n2 ---> Display\n3 ---> Search\n4 ---> Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter a value to insert into hash table : ");
                scanf("%d",&key);
                i=key%SIZE;
                struct node * neww=(struct node *)malloc(sizeof(struct node));
                neww->data=key;
                neww->next = NULL;
                if(head[i] == NULL)
                    head[i] = neww;
                else{
                    temp=head[i];
                    while(temp->next != NULL)
                    temp=temp->next;
                    temp->next=neww;
                }
                break;
            case 2:
                printf("Entries of Table size %d\n _______ ________________\n|Index  |     Values     |\n|-------|----------------|", SIZE);
                for(i=0;i<SIZE;i++){
                    printf("\n|  %d    | ",i);
                    if(head[i] == NULL)
                        printf("No Hash Entry  |");
                    else{
                        for(temp=head[i];temp!=NULL;temp=temp->next)
                        printf("%d->",temp->data);
                    }
                }
                printf("\n|_______|________________|");
                break;
            case 3:
                printf("\nEnter the element to be searched : ");
                scanf("%d",&key);
                index=key%SIZE;
                if(head[index] == NULL)
                    printf("\nSearch element not found\n");
                else{
                    for(temp=head[index];temp!=NULL;temp=temp->next){
                        if(temp->data == key){
                            printf("Search element found\n");
                            break;
                        }
                    }
                    if(temp==NULL)
                        printf("\nSearch element not found\n");
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Enter in the range of 1 to 4 \n"); 
                break;                        
        }
    }
    return 0;
}