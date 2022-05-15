#include <stdio.h>
#include <string.h>

int main(){
    char string1[50];
    
    int length = 0;
    printf("Enter a string : \n");
    scanf("%s",string1);

    length = strlen(string1);
    // printf("Length of string is : %d ",length);
    char string2[length];

    int index = 0;
    for(int i = length - 1; i >= 0; i--){
        string2[index] = string1[i];
        index++;
    }

    printf("After reversing the string : %s",string2);

    return 0;
}