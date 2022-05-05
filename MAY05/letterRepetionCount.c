#include<stdio.h>
int main(){
    char name[100],letter;
    int n=0,count=0,i;
    printf("Enter the number : \n");
    scanf("%d",&n);
    printf("Enter the  name : \n");
    for(i=0;i<=n;i++)
    {
        scanf("%s",name);
    }
    for(i=0;i<=n;i++)
    {
        printf("%s",name);
    }
    printf("Enter the charecter \n");
    scanf("%c",&letter);

    for(int i=0;i<=n;i++);
    {
        if(name[i]==letter){
            count++;
        }
        

    }
    printf("%c letter %d times present in the name",letter,count);
    return 0;
}