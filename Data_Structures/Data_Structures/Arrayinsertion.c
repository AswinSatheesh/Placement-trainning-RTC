

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,4,56,66};
    int elem = 100;
    int loc;
    printf("Enter the location : \n");
    scanf("%d",&loc);
    int n =5;
    printf("Before insertion \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    for(int i = n-1; i >=loc-1;i--)
    {
        arr[i+1] =arr[i];
    }
    arr[loc -1] = elem;
    
    printf("\n After insertion \n");
    for(int i = 0; i < n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
