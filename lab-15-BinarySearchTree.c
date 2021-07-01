#include<stdio.h> 
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int item){
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root -> data = item;
    root -> left = NULL;
    root -> right = NULL;
    return root;
}
void inorder(struct node* root){
    if (root != NULL) {
        inorder(root -> left);
        printf("%d ", root -> data);
        inorder(root -> right);
    }
}
struct node* insert(struct node* node, int data)
{
    if (node == NULL)
        return create(data);
    if (data < node -> data)
        node -> left = insert(node -> left, data);
    else if (data > node -> data)
        node -> right = insert(node -> right, data);
    return node;
}
struct node* search(struct node* root, int data){
    if(root == NULL)
        return NULL;
    if(root -> data > data)
        search(root -> left , data);
    else if(root -> data < data)
        search(root -> right, data);
    else
        return root;
}
int main(){
    struct node* root = NULL,*temp;
    int z,choice,element,n,out;
    printf("Enter any number to any opreations 0 to exit : ");
    scanf("%d",&n);
    do{
        printf("\nEnter\n1 ---> insert a data\n2 ---> display\n3 ---> search\n4 ---> find minimum value\n5 ---> find maximum value\n");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("Enter the value to insert : ");
            scanf("%d", &z);
            if(root == NULL){
                root = insert(root,z);
                break;
            }
            insert(root,z);
            break;
        case 2:
            printf("Inorder\n");
            inorder(root);
            break;
        case 3:
            printf("Enter the value to search : ");
            scanf("%d", &element);
            temp = search(root, element);
            if(temp != NULL)
                printf("The element found and present in BT");
            else
                printf("Element not found");
            break;
        case 4:
            temp = root;
            while(temp -> left != NULL)
                temp = temp -> left;
            printf("Minimum value is %d ", temp -> data);
            break;
        case 5:
            temp = root;
            while(temp -> right != NULL)
                temp = temp -> right;
            printf("Maximum value is %d ", temp -> data);
            break;
        default:
            printf("Enter the correct choice (between 1 and 5) ");
            break;
        }
        printf("\n0 to exit and any number to continue : ");
        scanf("%d",&n);
    }while(n!=0);
}
