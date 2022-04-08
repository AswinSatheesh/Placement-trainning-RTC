
 //need to fix the error. not getting output
#include<stdio.h>
int main(){
    int row = 3;
    for(int i = 1; i < = 3; i++){
        for(int s = 1; s <= row-i; s++){
            for(int j = 1; j <= 2 *i-1; j++){
                printf(" * ");
            }
            printf("\n");
        }
    }
    return 0;
}