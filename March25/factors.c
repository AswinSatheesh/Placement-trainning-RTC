//Find the factors of a number {if number is 100 - factors are :   1,2,4,5,10,20,25,50,100}

#include<stdio.h>
void factors(int num){
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d \t",i);
        }
    }
}
int main(){
    int num;
    printf("Enter the number to find it's factors :");
    scanf("%d",&num);
    factors(num);
    return 0;
} 