#include<stdio.h>
int main(){
    int arr[20];
    int arrcpy[20];

    printf("Enter the 5 elements :\n");
    for(int i = 0; i < 5; i++){
        scanf("%d \n",&arr[i  ]);
    }

    for(int j = 0; j < 5; j++){
        arrcpy[j] = arr[j];
    }

    printf("Array elements after copying : ");

    for(int k = 0; k < 5; k++){
        printf("%d ", arrcpy[k]);
    }


    return 0;
}