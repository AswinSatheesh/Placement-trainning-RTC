//In between 1 to 100 we have to find the count of even numbers and odd numbers.

#include <stdio.h>
void EvnOddCount(int n){
    int EvnCount = 0;
    int OddCount = 0;
    for(int i = 1; i<=n; i++){
        if(i % 2 == 0){
            EvnCount++;
            printf("even numbers are: %d\n",i);
        }
        else{
            OddCount++;
            printf("odd numbers are : %d\n",i);
        }
         //printf("%d is even \n",i);
    }
    printf("Even number count is : %d\n", EvnCount);
    printf("Odd number count is : %d\n",OddCount);
} 
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    EvnOddCount(num);
}