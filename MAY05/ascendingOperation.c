#include<stdio.h>
int main(){
    int temp = 0;
    int array[] = {15, 5, 2, 16 ,7};
    for(int i = 0; i<=4; i++){
        for(int j = i + 1; j<=4; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            
        }
    }

    for(int k = 0; k <=4; k++){
        printf("%d ",array[k]);
    }

    
    printf("\n");

    for(int l = 0; l <=4; l=l+2){
        printf("%d ",array[l]);
    }
    // printf("\n");

    for(int l = 1; l <=4; l = l+2){
        printf("%d ",array[l]);
    }

    return 0;
}