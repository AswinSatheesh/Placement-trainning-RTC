#include<stdio.h>
int main(){

    int num = 5;
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(i == j || j == (num - i + 1)){
                printf(" %d ",j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}