#include<stdio.h>
int main(){
    int count = 0,length = 0;
    // char name[100] ={"Rathinam"};

    char name[100];
    char letter;
    printf("Enter the name : \n");
    scanf("%s",name);

    for(int j = 0; name[j] != '\0'; j++){
        length++;
    }
    
    // printf(" Length : %d ",length);
    // printf("\n");
    printf("Enter a letter to check, if it available in the word : \n");
    scanf(" %c",&letter);  //when we add two scanf , second one will not work, so we have to add a space before ' %c' inside scanf  //https://www.sololearn.com/Discuss/2334389/why-second-scanf-is-not-working
    for(int i = 0; i < length; i++){
        if(name[i] == letter){
            count++;
        }
    }

    if (count != 0){
        printf("%c is %d times present in the '%s' word ",letter,count,name);
    }
    else{
        printf("Sorry! , %c is not present in this '%s' word",letter,name);
    }
    

    return 0;
}