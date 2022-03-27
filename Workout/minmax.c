#include <stdio.h>
void main(){
    int n =100;
    for(int i = 1; i<=n; i++){
        if(i % 5 ==0){
            printf("%d\t",i);
        }
    }
}