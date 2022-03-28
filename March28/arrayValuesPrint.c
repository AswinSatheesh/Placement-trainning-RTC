//some problem need to fix

#include<stdio.h>
int main(){
    int limit = 0;
    
    printf("Enter how many values array you want to create: ");
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter %d array elements : \n", limit);
    for(int i = 0; i<limit; i++){
        scanf("%d \n",&arr[i]); 
    }
    
    printf("Entered elements are :");

    for(int i = 0; i<limit; i++){
        printf("%d \n",arr[i]); 
    }
    
    return 0;
}