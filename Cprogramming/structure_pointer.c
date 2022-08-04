#include <stdio.h>
struct student
{
    int reg;
    char name[100];
    int mark1, mark2, mark3;
} std1;
int main()
{
    struct student st[2],*ptr;
    // ptr=st;
    for(i=0;i<2;i++)
    {
        printf("Enter reg no:");
        scanf("%d",&st[i].reg);
        // scanf("%d",ptr->reg);

    }
    std1.reg = 1234;
    std1.name = "Aswin";
    std1.mark1 = 98;
    std1.mark2 = 94;
    std1.mark3 = 90;

    printf("Register Number : %d\n",std1.reg);
    printf("Name : %s\n",std1.name);
    printf("Mark 1 : %d\n",std1.mark1);
    printf("Mark 2 : %d\n",std1.mark2);
    printf("Mark 3 : %d\n",std1.mark3);
return 0;
}