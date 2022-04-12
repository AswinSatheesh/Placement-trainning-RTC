//Concatenation of strings

#include<stdio.h>
int main(){
    char name1[20] = "Rathinam";
    char name2[20] = " Rtc";
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; name1[i] != '\0'; i++){
        count1++;
    }
    for(int j = 0; name2[j] != '\0'; j++){
        count2++;
    }
    int m = 0;
    for(int k = count1; m < count2; k++){
        name1[k] = name2[m];
        m++;
    }
    printf("After concatenation : %s",name1);
    return 0;
}