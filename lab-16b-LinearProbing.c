#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int hash_table[SIZE]={NULL};
void main(){
  int key,index,i,flag=0,choice;
  while(1){
    printf("\nEnter\n1 ---> Insert\n2 ---> Display\n3 ---> Search\n4 ---> Exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        printf("\nEnter a value to insert into hash table : ");
        scanf("%d",&key);
        for(i=0;i<SIZE;i++){
          index=(key+i)%SIZE;
          if(hash_table[index] == NULL){
            hash_table[index]=key;
            break;
          }
        }
        if(i == SIZE)
        printf("\nElement cannot be inserted\n");
        break;
      case 2:
        printf("Entries of Table size %d\n _______ ____________\n| Index |   Values   |\n|-------|------------|", SIZE);
        for(i=0;i< SIZE; i++)
          printf("\n|   %d   |     %d     |",i,hash_table[i]);
        printf("\n|_______|____________|");
        break;
      case 3:
        printf("\nEnter search element : ");
        scanf("%d",&key);
        key=key%SIZE;
        for(i=0;i<SIZE; i++){
          index=(key+i)%SIZE;
          if(hash_table[index]==key){
            printf("Value is found at index %d",index);
            break;
          }
        }
        if(i == SIZE)
          printf("\nValue is not found\n");
        break;
      case 4:
        exit(0);
      }
    }
}