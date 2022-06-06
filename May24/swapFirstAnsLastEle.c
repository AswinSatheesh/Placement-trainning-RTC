#include<stdio.h>
int main(){
    int arr[] = {12,6,8,20,50,40};
   
    
    int length = 0;
    int temp = 0;
    length  = sizeof(arr)/sizeof(arr[0]);
    printf("Original array : ");
    for(int j = 0; j<length; j++){
        printf("%d ",arr[j]);
    }

    int len =length -1;
    for(int i = 0; i < length/2; i++){
        temp = arr[i];
        arr[i] = arr[len - i];
        arr[len - i] = temp;
    }
    printf("\n");
     printf("after swapping : ");

    for(int j = 0; j<length; j++){
        printf("%d ",arr[j]);
    }
    return 0;
}