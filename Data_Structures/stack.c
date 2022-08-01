#include<stdio.h>
int top = -1;
int stack[5];
void push();
void pop();
void display();
int main()
{
    int pushelem;
    int choice = 0;
 

   
    do
    {
        printf("Select your choice : \n");
        printf(" 1.push \n 2. pop \n 3.display \n");
            
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter the element to insert: \n");
            scanf("%d",&pushelem);
            push(pushelem);
            break;
        case 2 : 
            pop();
            break;
        case 3 :
            display();
            break;
        default:
            printf("Enter a valid choice !! \n");
            return 0;
    }
    } while (choice);
    return 0;
    
    
    // push(pushelem);
    // // pop();
    // display();

// return 0;
}

void push(int pushelem){
    top++;
    stack[top] = pushelem;
    printf("element inserted successfully! \n");
}
void pop()
{
    if(top == -1){
        printf("Stack underflow! \n");
    }
    else{
        top--;
    }
}

void display(){
    for(int i = top; i >=0; i--){
        printf("%d \n" ,stack[i]);
    }
}