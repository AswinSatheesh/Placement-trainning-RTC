#include <stdio.h>
struct student
{
    int regno;
    char name[100];
    int mark1,mark2,mark3;
};
int main()
{   
    struct student st[2];
    for(int i=0;i<2;i++)
    {
        printf("enter the register number :");
        scanf("%d ",&st[i].regno);
        printf("\nenter the name :");
        scanf("%s",st[i].name);
        printf("mark 1 :");
        scanf("%d",&st[i].mark1);
        printf("mark 2 :");
        scanf("%d ",&st[i].mark2);
        printf("mark 3 : ");
        scanf("%d ",&st[i].mark3);
    }
   for(int i=0;i<2;i++)
   {
       printf("student details are \n");
       printf("register no %d \n",st[i].regno);
       printf("name :%s",st[i].name);
       printf("mark 1 : %d \n", st[i].mark1);
       printf("mark 2 : %d \n", st[i].mark2);
       printf("mark 3 : %d \n", st[i].mark3);
       
   }
   
  
    
   
    return 0;
}