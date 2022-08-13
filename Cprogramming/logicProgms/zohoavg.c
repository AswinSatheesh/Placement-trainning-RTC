#include<stdio.h>
int main()
{
    int arr[] = {2,4,6,8};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int avg;
    for(int i = 0; i < arrsize; i++)
    {   
        sum = sum + arr[i];
    }
    avg = sum/arrsize;
    printf("Avg : %d",avg);
    printf("\n");
    for(int j = 0; j < arrsize; j++)
    {
        if(avg == arr[j])
        {
            printf("%d \n",avg);
        }
        
        else if (avg < arr[j])
        {
            printf("Nearest no :  %d ",arr[j]);
            break;
        }
    }
    
    return 0;
}