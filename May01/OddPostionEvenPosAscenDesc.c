//This is a program to change odd postion in ascending order and Even postion in descending order.
// input : 12,27,35,21,30
// output : 35,21,30,27,12

#include<stdio.h>
int main()
{
    int temp1=0,temp2=0;
    int arr[20]={12,27,35,21,30};
    printf("Before sorting : \n");
    for(int l=0; l<5; l++)
    {
        printf("%d ", arr[l]);
    }
    printf("\n");
    for(int i=0; i<5; i=i+2)
    {
    for(int j=i+2;j<5;j=j+2)
    {
        if(arr[i]<arr[j])
        {
            temp1=arr[i];
            arr[i]=arr[j];
            arr[j]=temp1;
        }
    }
    }
    for(int k=1; k<5; k=k+2)
    {
        for(int m=k+2; m<5; m=m+2)
        {
            if(arr[k]>arr[m])
            {
                temp2=arr[k];
                arr[k]=arr[m];
                arr[m]=temp2;
            }
        }
    }
    printf("after completing thw sorting array looks like :\n");
    for(int l=0; l<5; l++)
    {
        printf("%d ", arr[l]);
    }
    return 0;
}