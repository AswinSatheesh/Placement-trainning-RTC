//copy of string.
hw- first letter capital

#include<stdio.h>
int main(){
    char word1[15];
    char word2[15];
    printf("Enter the string :");
    scanf("%s",word1);

    for(int i=0; word1[i] != '\0'; i++){
        word2[i] = word1[i];
    }


    printf("Word2 is : %s ", word2);
    return 0;
}