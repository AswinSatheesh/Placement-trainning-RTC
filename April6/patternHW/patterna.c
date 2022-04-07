//need to print "a" letter,  completed

#include<stdio.h>
int main(){
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            if(i == 1 || j == 4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int k = 1; k <= 4; k++){
        for(int l = 1; l <=4; l++){
            if(k == 1 || k == 4 || l == 1 || l == 4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}