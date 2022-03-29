//find total weight
// if number divisible by 3 then weight =10
// if number divisible by 5 then weight = 5
// if number is even then weight =1

#include<stdio.h>
int main(){ 
    int input;
    printf("enter the input :\n");
    scanf("%d",&input);

    int weight = 0;
    if(input % 3 == 0){
        weight = weight + 10;
    }
    if (input % 5 == 0)
    {
        weight = weight + 5;
    }
    if(input % 2 == 0){
        weight = weight + 1;
    }

    printf("Total weight = %d ", weight);
    
    return 0;
}