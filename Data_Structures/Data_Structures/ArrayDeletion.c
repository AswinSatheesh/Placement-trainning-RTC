#include<stdio.h>
int main()
{
    int limit = 0,userindex = 0,index = 0;
    printf("Enter the limit : \n");
    scanf("%d",&limit);
    int array[limit];
    printf("Enter %d  elements : \n",limit);

    for(int i = 0; i < limit; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Entered elements area : \n");
    for(int i = 0; i < limit; i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n Enter the index to remove that element from the array: \n");
    scanf("%d",&userindex);

    index = userindex -1;

    if(index < 0 || index >= limit)
    {
        printf("\n Enter valid index !!! \n");
    }
    else{
        printf("After deletion : \n");
        for(int j = index; j < limit-1; j++)
        {
            array[j] = array[j + 1];
        }
        
        limit--; //after deletion we have to reduce the limit -1
    }

    
    for(int i = 0; i < limit; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}