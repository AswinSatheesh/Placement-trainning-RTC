#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;
int main()
{
   insert();
   display();

    return 0;
}

void insert()
{
    int choice; 
    do
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter the data to insert: \n");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;

        }
        temp->next = head;
        printf("Enter your choice: \n");
        scanf("%d",&choice);
    }while(choice);
    
}

void display()
{
    temp = head;
    while(temp->next != head)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
}