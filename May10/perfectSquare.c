#include <stdio.h>
 
int main()
{
	int array[100],n,i,j;
	int count_even=0, count_fs=0,count_power=0;
	/*entering the range*/
	printf("Enter the range :");
	scanf("%d\n",&n);
	/* array values*/
	printf("Entering array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			count_even=count_even+array[i];
			}
		if(array[i]%4==0||array[i]%6==0)
		{
			count_fs=count_fs+array[i];
			}
		for(j=0;j<n;j++)
		{
			if(array[i]==j*j)
			{
				count_power=count_power+array[i];
				}
			}
		}
		count_power=count_power+5;
		count_fs=count_fs+4;
		count_even=count_even+3;
		printf("count_power: %d\n",count_power);
		printf("count_fs: %d\n",count_fs);
		printf("count_even: %d\n",count_even);
	return 0;
}