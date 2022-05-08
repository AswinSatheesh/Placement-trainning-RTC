#include<stdio.h>
int main(){
    int array[50] ={10,36,24,71,59};
    int j = 0;
    int f = 0;
    for(int i = 0; i<array[j]; i++){
        if(i*i == array[j]){
           f = 1; 
           break;
        }
        if(f ==1){
            printf("Perfect square.\n");
        }
        else{
             j++;
        }
        
    }
   
       
    return 0;
}