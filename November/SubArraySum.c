// .Given an integer array, find subarrays with a given sum in it.
#include <stdio.h>


void subArraySum(int arr[], int n, int sum)
{
  
  for (int i=0;i<n;i++) 
  {
    int currentSum = arr[i];

    if (currentSum == sum) {
      printf("Sum found at indexe %d ", i);
      return;
    }
    
    else 
    {
      // Trying all subarrays starting with 'i'
      for (int j=i+1;j<n;j++) 
      {
        currentSum += arr[j];
        if (currentSum == sum) 
        {
          printf("Sum found between indexes %d and %d",i, j);
          return;
        }
      }
    }
  }
  
  printf("No subarray found");
  return;
}


int main()
{
    int len,i,sum;
    printf("Enter the size of the array: ");
    scanf("%d",&len);
    
  int arr[len];
  printf("Enter array elements: \n");
  for(i=0;i<len;i++)
  {
      scanf("%d",&arr[i]);
  }
  
  printf("Sum to be found? ");
  scanf("%d",&sum);
  
  subArraySum(arr, len, sum);
  return 0;
}