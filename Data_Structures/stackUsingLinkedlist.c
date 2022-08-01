#include<stdlib.h>
#include<stdio.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*top;
void main(){
    int choice = 0;

    do
    {
        printf("Select your choice : \n");
        printf(" 1.push \n 2. pop \n 3.display \n");
            
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            push();
            break;
        case 2 : 
            pop();
            break;
        case 3 :
            display();
            break;
        default:
            printf("Enter a valid choice !! \n");
            
    }
    } while (choice);

}

void push()
{
    newnode = malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    if(newnode == NULL)
    {
        printf("Not able to push");
    }
    else{
        top->next = newnode;
        top = newnode;
    }
}

void display(){
    top = head;
    while(top->next != NULL){
        printf("%d ",top->data);
        top = top->next;
    }
    printf("%d",top->data);
}
