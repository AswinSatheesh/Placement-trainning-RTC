#include<stdio.h>
int main(){
    int arr[10][10];
    printf("Enter 6 elements for creating two dimensional array: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr[i][j]);
        }
        // printf("\n");
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}