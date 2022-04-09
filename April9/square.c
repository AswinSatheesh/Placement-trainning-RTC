#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    for(int row = 1; row <= num; row++){
        for(int col = 1; col <= num; col++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}