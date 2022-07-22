#include<stdio.h>
int main(){
    int num;
    printf("Enter the num:\n");
    scanf("%d",&num);
    int a = 0;
    int b = 1;
    int result = 0;
    printf("%d ",a);
    while(num > 0){
        result = a + b;
        a = b;
        b = result;
        printf("%d ",result);
        num--;
    }
}