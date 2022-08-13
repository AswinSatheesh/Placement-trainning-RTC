/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[5] = {5,4,10,1,6};
    int temp = 0;
    int len = 5;
    printf(" Before bubble sorting\n");
    
    for(int i = 0; i < len; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    for(int i = 0; i < len; i++)
    {
        for(int j = i+1; j < len; j++)
        {
            if(array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nAfter bubble sorting\n");
    for(int i = 0; i < len; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
    