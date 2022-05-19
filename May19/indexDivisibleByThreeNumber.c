//This is a program to find the array value if the index is divisible by 3 , and print result in reverse order.
// ip - 1,2,3,4,5,10,15,20,35
// op - 35,10,3

#include <stdio.h>
#include<string.h>
int main(){
    int array[] = {1,2,3,4,5,10,15,20,35,40};    
    int length = 0;
    length = sizeof(array)/sizeof(array[0]);
    printf(" Length : %d \n",length);
    
    for(int i = length - 1; i > 0; i--){
        if(i % 3 == 0){
            printf("%d ",array[i]);
        }
    }

    return 0;
}