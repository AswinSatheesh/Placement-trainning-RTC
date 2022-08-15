#include<stdio.h>
void push();
void show();
void pop();
void exits();

int stack[10];
int top = -1;
int choice = 0;
int totalcount = 0;
int main()
{
    printf("Enter total stack element count :\n");
    
    scanf("%d",&totalcount);
    
    while(choice != 4){
        printf("1.Push \n 2.Pop \n 3.show \n 4.Exit \n");
        printf("Enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
               
            case 2:
            {
                pop();
                break;
            }
            case 3: 
            {
                show();
                break;
            }
            case 4:
            {
                exits();
                break;
            }
            default:
            {
                printf("Enter valid choice : \n");
            }
        }
    }
 

    
    return 0;
}

void push()
    {
        if(top == totalcount)
        {
            printf("Overflow");
            
        }
        else{
            int newele= 0;
            printf("Enter new element : \n");
            scanf("%d",&newele);
            top = top+1;
            stack[top] = newele;
        }
    }
    void show()
    {
        if(top == -1)
        {
            printf("Stack is empty!! \n");
        }
        else{
        for(int i =top; i >=0; i--)
        {
            printf("%d\n",stack[i]);
        }
        }
        

    }
    void pop()
    {
        if(top == -1)
        {
            printf("Underflow!!\n");
        }
        else{
            top = top -1;
        }
        
        // for(int j = top; j >=0; j--)
        // {
        //     printf("%d ",stack[j]);
        // }
    }
    void exits()
    {
        printf("Exiting ....");
        
    }