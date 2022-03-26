#include<stdio.h>
void min(int array[],int size){
    int minValue = array[0];
    int maxValue = array[0];
    int temp;
    for(int i = 1; i < array[size]; i++){
        if(minValue > array[i]){
            minValue = array[i];
        else if (maxValue < array[i] )
        {
            maxValue = array[i];
            }
            
        }
        
    }

    printf("Minimum value of this array is : %d \n", minValue);
    printf("Maximum value of this array is : %d ", maxValue);

}
int main(){
    int size;
    int array[size];
    printf("Enter how many elements you want to insert into your array? ");
    scanf("%d",&size);

    for(int i = 0; i < size; i++){
        printf("Enter the %d th element : ", i);
        scanf("%d",&array[i]);
    }

    for(int i = 0; i < size; i++){
        printf("%d \t", array[i]);
    }

    min(array,size);

    return 0;

}