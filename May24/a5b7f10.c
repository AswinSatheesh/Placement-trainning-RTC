#include<stdio.h>
int main(){
    char array[50];
    int length = 0;
    printf("Enter the length: \n");
    scanf("%d",&length);

    printf("Enter the %d elements : \n",length);
    for(int i = 0; i < length; i++){
        scanf("%s",&array[i]);
    }

    printf("\n");
    for(int i = 0; i < length; i++){
        printf("%c",array[i]);
    }

    
    return 0;
}