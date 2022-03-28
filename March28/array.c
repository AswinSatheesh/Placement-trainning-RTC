#include <stdio.h>
int main(){
    int arr[5];
    int sum = 0;
    int avg =0;
    printf("Enter the elements");
    for(int i = 0; i<5; i++){
        scanf("%d \n",&arr[i]);
    }

    // printf("Entered numbers are ;");

    for(int i = 0; i<5; i++){
        sum = sum + arr[i];
    }

    printf("Sum : %d\n",sum);

    avg = sum/5;

    printf("Average : %d\n", avg);

    return 0;

}