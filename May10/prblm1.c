#include <stdio.h>
#include <string.h>

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