#include<stdio.h>
int main(){
    
    char arr[3][4]= {"rath","inam","Tech"}; // In two dimensional array "arr[][]" first box is not necessary to assign, but second box is mandatory other wise error will occur.

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 'n'){
                printf("Position of  n  is : %d%d \n", i,j);
                break;
            }
        }
        
    } 

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 'm'){
                printf("Position of m  is : %d%d \n", i,j);
                break;
            }
        }
        
    } 
   

    return 0;
}