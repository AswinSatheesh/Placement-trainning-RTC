//Length of string.

#include<stdio.h>
int main(){
    char name[15];
    int count = 0;
    printf("Enter the string :");
    scanf("%s",name);

    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    printf("Length : %d \n", count);
    return 0;
}