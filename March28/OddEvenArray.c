//Find the odd and evn integers in an array.

#include<stdio.h>
int main(){
    int array[5] = {10,11,12,13,14};
    int even[10];
    int odd[10];
    int evncount = 0;
    int oddcount = 0;
    int length = 0;
    length = sizeof(array)/sizeof(int);  // to find the length of an array.
    for(int i = 0; i < length; i++){
        if(array[i] % 2 == 0){
            // printf("Even : %d \n",array[i]);
            even[evncount] = array[i];
            evncount++;
        }
        else{
            // printf("Odd : %d \n", array[i]);
            odd[oddcount] = array[i];
            oddcount++;
        }
    }      

    // int length = sizeof(even)/sizeof(even[0]); //how to find the length of an array in c 
    // printf("Length is %d ",length); 


    printf("Even :");
    for(int i = 0; i < 3; i++){ //length of an array
        printf(" %d ",even[i]);
    }
    printf("\n");
    printf("Odd :");
    for(int i = 0; i < 2; i++){
        printf(" %d ",odd[i]);
    }
    return 0;
}