#include<stdio.h>
int main(){
    char arr1[] = {'a', 't', 'o', 'i'};
    char arr2[] = {'a', 't', 't', 'i'};
    int length = sizeof(arr1)/sizeof(char);
    // printf("%d",length);
    int j = 0;
    for(int i = 0; i < length; i++,j++){  //
        
        //method 1 - for running this method we dont need j++ only i value is needed(remove j++ from the increment side)
        // if(arr1[i] != arr2[i] ){
        //     printf("Not match!! at position : %d \n value : '%c' and value '%c' are not equal ",i ,arr1[i], arr2[i]);
        // }

        //method2 - for running this method we need j++ in increment part.
        if(arr1[i] != arr2[j]){
            printf("not match ! Both values '%c' and '%c' are different",arr1[i],arr2[j]);
        }
        
    }

    return 0;
}