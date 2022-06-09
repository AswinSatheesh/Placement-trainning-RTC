#include<stdio.h>
int main(){
    int add = 0;
    int mult = 1;
    int odd[10];
    int even[10];
    int array[6] = {10,70,60,20,40,0};
    int index1 = 0;
    for(int i = 5; i >= 0; i = i - 2){
        odd[index1] = array[i];
        index1++;
    }
    
    for(int  k = 0; k < 3; k++){
        printf("%d ",odd[k]);
    }

    int index2 = 0;
    for(int m = 0; m < 6; m = m + 2){
        even[index2] = array[m];
        index2++;
    }

    for(int  k = 0; k < 3; k++){
        printf("%d ",even[k]);
    }
    printf("\n");
    //for addition

    for(int i = 0; i < 3; i++){
        add = add + even[i];
    }
    
    
    for(int i = 0; i < 3; i++){
        add = add + odd[i];
    }

    printf("Addition = %d \n",add);
    printf("\n");
    // //for multiplication

    for(int i = 0; i < 3; i++){
        mult = mult * odd[i];
    }
    
    
    for(int i = 0; i < 3; i++){
        mult = mult * even[i];
    }

    printf("multiplication = %d \n",mult);

    if( add == mult){
        printf("0");
    }
    else{
        printf("1");
    }
    
    printf("\n");
    return 0;
}