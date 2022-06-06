//This program is to find the sum of numbers in the array whose index divide by 3.

#include<stdio.h>
int main(){
    int sum = 0;
    // int array[10] = {10,20,30,40,50,60,70,80,90,100};
    int array[10];
    int length = 0;

    printf("Enter the length : \n");
    scanf("%d",&length);

    printf("Enter the %d elements: \n",length);

    for(int j = 0; j < length; j++){
        scanf("%d",&array[j]);
    }

    for(int i = 0; i < length; i++){
        if(i % 3 == 0){
            sum = sum + array[i];
        }
    }

    printf("Sum = %d",sum);
    return 0;
}