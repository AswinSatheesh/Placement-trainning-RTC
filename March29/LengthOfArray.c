#include<stdio.h>
int main(){
    // int Length  =0;

	// int arr[] = {2,4,6,8,9,4};//6 elements

	

	// //Calculate length of the array ( Number of elements)
	// Length  = sizeof(arr)/sizeof(int);

	// //display array length

	// printf("So, array length is:%d",Length );
    
    int array[] = {5,7,3,22,1,55,6};
    int length = 0;
    length = sizeof(array)/sizeof(int);
    printf("Length is : %d",length);
	
    return 0;
}