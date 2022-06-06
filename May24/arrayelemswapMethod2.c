#include<stdio.h>
int main(){
    int arr[] = {12,6,8,20,50,40};
   
    
    int length = 0;
    int temp = 0;
    length  = sizeof(arr)/sizeof(arr[0]);
    printf("Original array : ");
    for(int j = 0; j<length ; j++){
        printf("%d ",arr[j]);
    }

    int len =length -1;
    // int j;
    for(int i = 0 , j = len; i<length/2,j>=length/2; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("\n");
     printf("after swapping : ");

    for(int j = 0; j<length; j++){
        printf("%d ",arr[j]);
    }
    return 0;
}