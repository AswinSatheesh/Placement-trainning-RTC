#include<stdio.h>
int main()
{
    int array[5] = {1,2,3,4,5};
    int updatelm = 0;
    int userindex = 0;
    int limit = 5;
    printf("Array : \n");
    for(int i =0; i< limit; i++)
    {
        printf("%d ",array[i]);
    }

   
    printf(" \nEnter the index to update the new element : \n");
    scanf("%d",&userindex);
    
    int index = userindex -1;
    
    if(index < 0 || index >= limit){
        printf("Enter valid index !! \n");
    }
    else{
        printf("Enter the new element to update : \n");
        scanf("%d",&updatelm);
        array[index] = updatelm;
    }
    
    
    for(int j = 0; j<limit; j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}