#include<stdio.h>
int main(){
    int number,f = 0;
    printf("Enter the number :\n");
    scanf("%d",&number);
    for(int i = 0; i<number; i++){
        if(i*i == number){
            f = 1;
            break;
        }
    }
    if(f == 1){
        printf("Perfect square.");
    }
    else{
        printf("Not a perfect square.");
    }
    return 0;
}