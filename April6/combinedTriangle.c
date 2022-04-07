#include<stdio.h>
int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int k = 4; k >= 1; k--){
        for(int m = 1; m <= k; m++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}