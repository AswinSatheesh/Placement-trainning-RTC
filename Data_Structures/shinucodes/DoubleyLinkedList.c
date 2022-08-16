/**************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

***************************/
#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
}*head,*temp,*newnode;

int main()
{
  insert();
  display();
}
void insert()
{
    int choice;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the value to insert : \n");
        scanf("%d",&newnode->data);
        
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
        }
        printf("enter the choice : \n");
        scanf("%d",&choice);
        
    }while(choice);
    

}

void display()
{
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}