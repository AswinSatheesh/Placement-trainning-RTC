//Linked list operations

#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void delete();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*prev;

int main(){
    insert();
    display();
    delete();
    display();


    return 0;
}

void insert(){
    int choice;
    do{
        newnode = malloc(sizeof(struct node));
        printf("Enter the data \n");
        scanf("%d",&newnode->data);
        newnode->next =0;
        if(head == 0){
            head = newnode;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("enter the choice");
        scanf("%d",&choice);
    }while(choice);
}

void display(){
    temp = head;
    while(temp->next != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}

void delete(){

    int element;
    printf("\n");
    printf("Enter the element to be deleted : ");
    scanf("%d",&element);
    temp = head;
    while(temp->data != element){
        prev = temp;
        temp = temp->next;
    }
    if(temp == head){ // checking whether the entered element to delete is same as the head
        head = head->next;
        free(temp);  //free() - used to free the value - same as delete
    }
    else{
        prev->next = temp->next;
        free(temp);
    }
    
}

