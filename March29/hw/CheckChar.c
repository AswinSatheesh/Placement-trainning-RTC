//Write a prgm to check whether  a char is an Alphabet , digit or  special character.

#include<stdio.h>
int main(){
    // int num = 35;
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9'){ // how it works....
        printf("'%c' is digit.", ch);   
    
    }

    return 0;
}   