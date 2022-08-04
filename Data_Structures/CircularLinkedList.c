#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;
int main()
{
   insert();



    return 0;
}

void insert()
{
    newnode = malloc(sizeof(struct node));
    printf("Enter the data to insert: \n");
    scanf("%d",newnode->data);
    newnode->next = 0;
    if(head == 0)
    {
        head = newnode;
        newnode->next = head;  
    }
    else
    {
        temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
    }

}