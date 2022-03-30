//This is a prgm to find the maximum element in the given array.

#include<stdio.h>
int main(){
    
    int arr[5] ={20,30,1,400,50};
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        // printf("%d ",arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("maximum element in the array is : %d ", max);
    
    return 0;
}









































