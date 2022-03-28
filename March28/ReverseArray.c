//This is a prgm to reverse a array

#include<stdio.h>
int main(){
    int limit = 0;
    printf("How many elements array you want to create : ");
    scanf("%d",&limit);
    int array1[limit];

    printf("Enter the %d elements : \n",limit); 
    for(int i = 0; i < limit; i++){
        scanf("%d", &array1[i]);
    }

    printf("Normal array : \n ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d  ",array1[i]);
    }

    printf("\n Array after reversed :\n");
    for(int i = limit-1; i>=0; i--){
        printf("%d ",array1[i]);
    }
    

    return 0;
}