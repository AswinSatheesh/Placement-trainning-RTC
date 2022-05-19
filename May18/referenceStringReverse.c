// C program to reverse an array of strings
#include <stdio.h>
#include <string.h>

void ReverseArray(char* arr[], int n)
{
	char* temp;

	// Move from begin and end. Keep
	// swapping strings.
	int j = n - 1;
	for (int i = 0; i < j; i++) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
	}
}

int main()
{
	char* arr[] = { "one","two","three"};
	int n = sizeof(arr) / sizeof(arr[0]);
    printf("n value : %d \n",n);

	// PrintArray(arr, n);

	printf("\n");

	ReverseArray(arr, n);

	// PrintArray(arr, n);

	return 0;
}
