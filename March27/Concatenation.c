//This is a prgm where we are concatenating two strings without using a predefined function.

#include<stdio.h>
#include<string.h>
int main(){
    char name1[15] = "Aswin";
    char name2[15] = " Satheesh";
    int length1 = strlen(name1);
    int length2 = strlen(name2);

    printf("Length of first word : %d \n",length1);
    printf("Length of second word : %d \n",length2);

    for(int i = 0; i <= length2; i++){
        name1[length1 + i] = name2[i];
    }
    printf("After concatenation : %s ",name1);

    return 0;
}


