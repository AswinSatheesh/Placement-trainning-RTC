#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int evensum= 0, oddsum = 0;
    for(int i =0; i < 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evensum = evensum + arr[i];
        }
        else{
            oddsum = oddsum + arr[i];
        }
    }
    printf("Even sum =%d \n",evensum);
    printf("Odd sum = %d \n",oddsum);
    return 0;
}