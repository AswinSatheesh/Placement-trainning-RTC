//Write a program to count the number of repeated letter in a given word.
// Eg : RATHINAM TECHNICAL CAMPUS   - <A ,4> <T,2> <H,2> <I,2> <N,2> <M,2> <C,3>

#include<stdio.h>
int main(){
    char name[50] ={"RATHINAM TECHNICAL CAMPUS"};
    int length = 0;
    int letterCount = 1;
    for(int i = 0; name[i]!= '\0'; i++){
        length++;
    }
    printf("Length : %d \n",length);
    printf("%s \n",name);
    for(int j = 0; j < length; j++){
        for(int k = j + 1; k < length; k++){
            if(name[j] == name[k]){
                letterCount++;
                name[k] = ' ';
            }
        }

        if(letterCount > 1 && name[j] != ' '){
             printf("<%c, %d> \n",name[j],letterCount);
        }
        letterCount = 0;
    }
   
    return 0;
}