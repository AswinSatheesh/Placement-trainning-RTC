#include<stdio.h>
int main()
{
    int limit=0;
    printf("Enter the limit: \n");
    scanf("%d",&limit);
    int nums[limit];
    printf("Enter the %d elements: \n",limit);
    for(int i=0;i<limit;i++)
    {
        scanf("%d",&nums[i]);
    }
    int target=0;
    printf("Enter the target : \n");
    scanf("%d",&target);
    for(int i =0;i<limit;i++)
    {
        for(int j=i+1; j<limit;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("%d,%d",nums[i],nums[j]);
            }
        }
    }
    return 0;
}