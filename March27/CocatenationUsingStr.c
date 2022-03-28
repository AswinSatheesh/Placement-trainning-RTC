//String concatenation using string function 
//There is one problem with "strcat(destination, source) " - Buffer Overflow-(it will not check whether the destination have enough space to accomodate source , any way it will append so it is not safe to use).

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){ 
    char s1[30] = "aswin";
    char s2[15] = "Satheesh";
    // strcat(s1, s2);
    // printf("%s",s1);

    char s1 = toupper(s1[0]);
    printf("First letter capitalized : %s" , s1);
    
    // strncat(s1,s2,3);
    // printf("%s",s1);
    // puts(s1);

    return 0;
}