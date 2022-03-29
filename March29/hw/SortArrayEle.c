#include<stdio.h>
int main(){
    int array[] = {20, 7, 4, 5, 6, 1, 44};
    int length = sizeof(array)/ sizeof(int);
    // printf("%d\n",length);

    printf("Before Sorting : \n");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }

    printf("\n");
    printf("\n");
    int temp = 0;
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    
    }

    printf("After sorting : \n");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    return 0;
}