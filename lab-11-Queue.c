#include<stdio.h>
#define MAX 5
int main(){
     int choice,Queue[MAX],front=-1,rear=-1,ele;
     int i;
     do{
         printf("\nEnter\n1 ---> Enqueue \n2 ---> Dequeue \n3 ---> Display\n");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1:
             if(rear==MAX-1)
             printf("Queue is Full");
             else
             {
             printf("Enter the element:");
             scanf("%d",&ele);
             if(front==-1){
             front=rear=0;
             Queue[rear]=ele;
             }
             else
             Queue[++rear]=ele;
             }
             break;
             case 2:
             if(front==-1)
             printf("Queue is underflow");
             else
             {
             if(front==rear)
             front=rear=-1;
             else
             front++;
             }
             break;
             case 3:
             if(front==-1) printf("Queue is empty");
             else{
             for(i=front;i<=rear;i++)
             printf("%d->",Queue[i]);
             }
             break;
         }
         }while(choice<=3);
         return 0;
}
