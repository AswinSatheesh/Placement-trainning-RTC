#include <stdio.h>
#include <stdlib.h>
int merge_two_sorted_arrays(int arr1[], int arr2[], int arr3[], int m, int n)
{
int i,j,k;
i = j = k = 0;
for(i=0;i < m && j < n;)
{
if(arr1[i] < arr2[j])
{
arr3[k] = arr1[i];
k++;
i++;
}
else
{
arr3[k] = arr2[j];
k++;
j++;
}
}
while(i < m)
{
arr3[k] = arr1[i];
k++;
i++;
}
while(j < n)
{
arr3[k] = arr2[j];
k++;
j++;
}
}
int main()
{
int m, n =0;
int arr1 = {2,4,5,6,7,9,10,13};
int arr2 = {2,3,4,5,6,7,8,9,11,15}
for(int k = 0; arr1[k]!= '\0'; k++){
        m++;
    }
    // printf("Length : %d \n",length);
for(int k = 0; arr1[k]!= '\0'; k++){
        n++;
    }
int arr1[m],arr2[n];
int arr3[m+n];
int i;

merge_two_sorted_arrays(arr1,arr2,arr3,m,n);
printf("\nThe Merged Sorted Array : ");
for(i = 0; i < n + m; i++)
{
printf("%d ",arr3[i]);
}
printf("\n");
return 0;
}
