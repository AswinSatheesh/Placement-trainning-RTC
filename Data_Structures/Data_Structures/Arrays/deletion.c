#include<stdio.h>
int main()
{
    int array[50];
    int limit = 0;
    printf("Enter the limit: \n");
    scanf("%d",&limit);
    printf("Enter %d elements in array : \n",limit);
    for(int i = 0; i<limit; i++)
    {
        scanf("%d ",&array[i]);
    }
    
    printf("Before deletion : \n");
    for(int i = 0; i < limit; i++)
    {
        printf("%d ",array[i]);
    }
    int userloc = 0;

    printf("\nEnter the index element to remove from the array : \n");
    scanf("%d",&userloc);

    int loc = userloc -1;

    if(loc < 0 || loc >= limit)
    {
        printf("Enter valid index !!! \n  No operation done array looks like : \n");
    }
    else{
        printf("After array deletion : \n");
        for(int j = loc; j < limit-1; j++)
        {
            array[j] = array[j+1];
        }
        limit--;
    }

    for(int k = 0; k < limit; k++)
    {
        printf("%d ",array[k]);
    }
    
    return 0;
}