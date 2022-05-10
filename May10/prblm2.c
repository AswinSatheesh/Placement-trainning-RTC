//Write a program to count the number of repeated letter in a given word.
// Eg : RATHINAM TECHNICAL CAMPUS   - <A ,4> <T,2> <H,2> <I,2> <N,2> <M,2> <C,3>

#include<stdio.h>
int main(){
    char name[50] ={"RATHINAM TECHNICAL CAMPUS"};
    int length = 0;
    int letterCount = 0;
    for(int i = 0; name[i]!= '\0'; i++){
        length++;
    }
    int newArray[length];
    printf("Length : %d \n",length);
    printf("%s \n",name);
    for(int j = 0; j < length; j++){
        newArray[j] = 1;
        for(k = j+1; k <length;k++){
            if(name[j] == name[k]){
                newArray[j]++;
                
            }
        }
    }
   
    return 0;
}
////////////////////////////////////////////////////////
int main() {
    char str[100]={"rathinam technical campus"};
    int i,j,len=strlen(str);
    int freq[len];
    for(i=0;i<strlen(str);i++)
    {
        freq[i]=1;
        for(j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]){
                freq[i]++;
                str[j]='0';
            }
        }
    }
    printf("character and their frequency are: \n");
    for(i=0;i<len;i++){
           if(str[i]!=1&&str[i]!='0'){
               if(str[i]>='a'&&str[i]<='z'&&freq[i]>1){
             printf("<%c=%d> \n",str[i],freq[i]);  
               }
           }
           
    }
    
    return 0;
}