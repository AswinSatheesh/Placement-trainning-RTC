#include<stdio.h>
int factorial(int num){
    int fact = 1; 
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){

    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int result =factorial(num);
    printf("Factorial of number %d is : %d",num,result);

}