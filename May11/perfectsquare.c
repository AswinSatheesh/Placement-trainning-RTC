#include<stdio.h>
int main(){
    int count = 0;
    int length = 0;
    int array[50] ={10,36,24,71,59};
    for(int k = 0; array[k]!= '\0'; k++){
        length++;
    }
    printf("Length : %d \n",length);

    for(int i = 0; i < length; i++){
        int square = array[i] * array[i];

        for (int j = 0; j < length; j++)
        {
            if(array[j] == square){
                count = count + 1;
            }
        }
        
    }

    printf("count = %d \n ",count);
        
    return 0;
}