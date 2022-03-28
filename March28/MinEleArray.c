//This is a prgm to find the minimum element in the given array.

#include<stdio.h>
int main(){
    
    int arr[5] ={20,30,1,40,50};
    int min = arr[0];
    for(int i = 0; i < 5; i++){
        // printf("%d ",arr[i]);
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("Minimum element in the array is : %d ", min);
    
    return 0;
}