//This is a progrm to check whether the given set of numbers are following divisibility rule of 11.
// ip = 6381927  = we  have to add all odd postion values and then add all even postion value.
// then we have to do EvenSum minus OddSum then we will get one result. Check the result is equal to 0 or 11. if it equal then it is following divisibility rule of 11 , else not.

#include <stdio.h>
int main(){

    // int num = 6381927;
    int num =0;
    printf("Enter a number to check whether it is divisible by 11 or not :\n");
    scanf("%d",&num);
    
    int temp1 = num;
    int temp2 = num;
    int rem = 0, result = 0, EvenSum = 0, OddSum = 0;

    

    //To find the length of a integer :
    int length = 0;
    while(temp1 > 0){
        temp1 = temp1/10;
        length++;
    }

    printf("Length of integer : %d \n",length);
    
    for(int i = length - 1; i >=0; i--){
        rem = num % 10;
        if(i % 2 == 0){
            EvenSum = EvenSum + rem;
        }
        else{
            OddSum = OddSum + rem;
        }
        num = num/10;
    }
    printf("Even sum : %d\n", EvenSum);
    printf("Odd sum : %d\n", OddSum);

    result = EvenSum - OddSum;
    if(result == 0 || result == 11){
        printf("%d is divisible by 11 \n", temp2);
    }
    else{
       printf("%d is not divisible by 11 \n", temp2); 
    }
    return 0;
}