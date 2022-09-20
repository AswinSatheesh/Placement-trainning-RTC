//This is a soacks problem in hackerrank
#include<stdio.h>
int main()
{

int arr[] = {1,0,1,0,0,2};
int length = sizeof(arr)/sizeof(arr[0]);
// printf("length = %d",length);

//sort
int temp;
for(int i = 0; i < length; i++)
{
    for(int j = 0; j < length -1-i; j++)
    {
        if(arr[j] > arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
}

for(int k = 0; k<length; k++)
{
    printf("%d ",arr[k]);
}

return 0;

}