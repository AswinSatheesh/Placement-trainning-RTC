//This is a prgm to swap the first and last element of array,  and swap second and second last  so on.......
//ip - 3,8,9,13,15,4
//o/p - 4,15,13,9,8,3

#include <stdio.h>
int main(){
    int array[] = {3,8,9,13,15,4};
    int length = 0;
    length = sizeof(array)/sizeof(array[0]);
    int temp = 0;
    int len = length - 1;
    printf("Length of array : %d \n", length);
    for(int i = 0; i < length/2; i++){
        temp = array[i];
        array[i] = array[len - i];
        array[len - i] = temp;
    }

    for(int j = 0; j < length; j++){
        printf("%d ",array[j]);
    }
    return 0;
}