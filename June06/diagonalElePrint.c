#include<stdio.h>
int main(){
    // char arr[3][3] = {{'w','o','i'},{'l','o','e'}};
    char arr[3][3] = {{'w','e','l'},{'c','o','m'},{'e','j','i'}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            // printf("%c ",arr[i][j]);
            if(i == j){
               printf("%c ",arr[i][j]); 
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            // printf("%c ",arr[i][j]);
            if(i + j == 2){
               printf("%c ",arr[i][j]); 
            }
        }
    }
    return 0;
}