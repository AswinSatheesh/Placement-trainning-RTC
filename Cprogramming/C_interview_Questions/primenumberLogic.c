#include<stdio.h>
int main()
{
    int end_range = 0;
    int start_range = 0;
    printf("Enter the starting Range : \n");
    scanf("%d",&start_range);
    printf("Enter the Ending Range : \n");
    scanf("%d",&end_range);
    
    for(int i = start_range; i <= end_range; i++)
    {
        int count = 0;
        for(int j = 1; j <= end_range; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}