#include<stdio.h>
int main()
{
    // int count = 0; //resutl will be 0,4,8,12
    for(int i = 0; i <4;i++)
    {
        int count = 0; // result will be 0,0,0,0
        // printf("%d ",count);
        for(int j=0;j<4;j++)
        {
            count++;
            
            printf("%d ",count); // result will be 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4
        }
    }
    
    return 0;
}