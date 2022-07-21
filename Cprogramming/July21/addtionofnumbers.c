#include<stdio.h>
int fun(int,int); //function declaration.
int fun(int a , int b){ //function defenition
    int result = a + b;
    return result;
}
int main(){
    int a =10;
    int b = 20;
    int sum = fun(a,b); //fuction call
    printf("Sum : %d",sum);
}