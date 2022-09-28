//airport bin problem
#include<stdio.h>
int main()
{
    int temp =0;
    int arr[10] = {0,1,2,0,2,1,0,1,0,2};
    printf("Before sorting Bin looks like : \n");
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i = 0; i < length; i++)
    {
        for(int j = i+1; j<;j++)
        {
            if(arr[j] < arr[i]);
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("After sorting. \n");
    for(int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}