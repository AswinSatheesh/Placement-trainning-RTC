#include<stdio.h>
int main(){
    int arr1[10][10];
    int arr2[10][10];
    int result[10][10];
    printf("Enter 6 elements to create the first matrix : \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");

    printf("Enter 6 elements to create the second matrix : \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");

     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("After matrix addition :\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}