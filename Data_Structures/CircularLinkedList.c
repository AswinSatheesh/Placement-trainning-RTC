#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void insertfront();
struct node
{
    int data;
    struct node *next;
}*head,*temp,*tail,*newnode;
int main()
{
   
   int option;
   while(option !=4)
   {
    printf("\nChoose your option : \n");
    printf("\n 1.insert \n 2.display \n 3.insertAtfront \n 4.Exit \n");
    printf("Enter your option : \n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            insertfront();
            break;
            
        }
        case 4:
        {
            printf("Exiting...");
            break;
        }
        default:
        {
            printf("Enter valid index !! \n");
        }
    }
   
   }
   
   

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
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;

        }
        tail->next = head;
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

void insertfront()
{
    newnode = malloc(sizeof(struct node));
    int newvalue = 0;
    printf("Enter the new value to insert at front: \n");
    scanf("%d",&newvalue);

    newnode->data = newvalue;
    newnode->next = head;
    tail->next = newnode;
    head = newnode;
}