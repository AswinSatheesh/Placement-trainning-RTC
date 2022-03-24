//To reverse a number

#include<stdio.h>
int main(){
    int num,reminder,reverse = 0;
    int temp = 0;
    printf("Enter a number to reverse: ");
    scanf("%d",&num);
    temp = num;
    while(num != 0){
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }
    printf("Reverse of this number is : %d\n",reverse);  

    if(reverse == temp){
        printf("Given number is  palindrome.\n");
    }else{
        printf("Not a palindrome.\n");
    }
    return 0;
}