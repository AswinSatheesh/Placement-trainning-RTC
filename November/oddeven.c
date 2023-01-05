#include<stdio.h>
int main()
{
    int arr[] = {1, 3, 2, 5, 4, 7, 10};
    int len =7;
    int evenarray[len],oddarray[len];
    //normal sorting
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int k=0,j=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i] % 2 ==0)
        {
            evenarray[k] = arr[i];
            k++;
        }
        else{
            oddarray[j] = arr[i];
            j++;
        }

    }
    if(arr[0] %2==0)
    {
        for(int i=0;i<len;i++)
        {
            printf("%d %d ",evenarray[i],oddarray[i]);
        }
    }
    else{
        for(int i=0;i<len;i++)
        {
            printf("%d %d ",oddarray[i],evenarray[i]);
        }
    }
    return 0;
}



