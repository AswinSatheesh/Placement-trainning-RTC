#include<stdio.h>
int main()
{
    int limit = 5, ele =0; 
    int arr[5] = {10,20,30,40,50};
    printf("Array elements are : \n");
    for(int i = 0; i < limit; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n Enter the element to search :");
    scanf("%d",&ele); //if we use space "%d " bw here console we have to enter one more input to get print.
    int flag = 0;
    for(int j =0; j < limit; j++)
    {
        if(arr[j] == ele)
        {
            printf("Element %d present.\n",arr[j]);
            printf("At index : %d for pgmr \n",j);
            printf("At index : %d for user \n",j+1);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Element %d is not present in the array!!!",ele);
    }
    
    return 0;
}