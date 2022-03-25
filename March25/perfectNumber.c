//Write a c program to check perfect or deficient or Abundant number.

#include<stdio.h>
void check(int num){
    int temp = 0;
    temp = num;
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            // printf("%d \t",i);
            sum = sum + i;
        }
    }
    printf("Sum is : %d \n",sum);
    if(sum == temp){
        printf("It is a perfect number.");
    }
    else if(sum < temp){
        printf("it is a deficient number");
    }
    else if(sum > temp){
        printf("It is a Abundant number.");
    }
}
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    check(num);
    return 0;
} 