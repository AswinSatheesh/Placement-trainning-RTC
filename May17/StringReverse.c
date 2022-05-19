#include <stdio.h>
int main(){
    char array[100];
    printf("Enter 3  strings:");
    scanf("%[^\n]s", array); 

    // printf("%s ",array);
    int length = 0;
    int count = 0;
    for(int i = 0; array[i] != '\0'; i++){
        length++;
    }
    // printf("Length is : %d \n",length);

    // printf("Length is : %d",length);
    for(int i = length -1; i >=0; i--){
        count = count + 1;
        if(array[i] == ' ' || i == 0){
            for(int j = i; j <=count; j++){
                printf("%c",array[j]);
            }
        }
    }
    
    return 0;
}