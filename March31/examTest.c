//write a c prgm to calclate sum when 3 and 5 meets condition

#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 0; i <= 10; i++){
        if(i == 3){
            sum += i;
        }
        if(i == 5){
            sum += i;
        }
    }
    printf("Sum : %d \n",sum);
    return 0;
}