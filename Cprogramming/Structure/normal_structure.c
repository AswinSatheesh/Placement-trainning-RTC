#include <stdio.h>
struct student
{
    int reg;
    char name[100];
    int mark1, mark2, mark3;
};
int main()
{
    int count =0;
    printf("How many students details how want to enter :\n");
    scanf("%d",&count);
    int value = 1;
    struct student st[count];
    for(int i=0;i<count;i++)
    {
        printf("Enter student %d reg no:\n ",value+i);
        scanf("%d",&st[i].reg);
        printf("Enter your name : \n");
        scanf("%s",st[i].name);
        printf("Enter your  mark1:");
        scanf("%d",&st[i].mark1);
        printf("Enter your  mark2:");
        scanf("%d",&st[i].mark2);
        printf("Enter your  mark3:");
        scanf("%d",&st[i].mark3);
     
    }

    for(int i = 0; i < count; i++){
        printf("\n Detail of student :");
        printf("ID: %d\n",st[i].reg);
        printf("First Name :%s\n",st[i].name);
        printf("Mark1 %d\n",st[i].mark1);
        printf("Mark2 %d\n",st[i].mark2);
        printf("Mark3 %d\n",st[i].mark3);

    }
return 0;
}