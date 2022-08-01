#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*temp,*newnode;

void insert(); //function declaration
void display(); 
void deletion();

int main(){
    insert();
    display();
    deletion();

    return 0;
}

void insert(){
    int choice;
    do
    {
        newnode = malloc(sizeof(struct node));  //sometimes this may through error so use typecasting to structure - newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert:\n");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if(head == NULL){
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev =temp;
        }
        printf("Enter the choice : \n");
        scanf("%d",&choice);
    }while(choice);
    

}

void display()
{
    temp = head;
    while(temp->next != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}


void deletion()
{
    int element;
    printf("Enter the element to delete form the doubly linked list: \n");
    scanf("%d",&element);
    temp = head;
    while(temp->data != element)
    {
        temp = temp->next;
    }
    if(temp->next == 0){
        temp->prev ->next = NULL;
    }
    else if(temp ->prev == 0)
    {
        //not completed
    }
}
