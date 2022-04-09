#include<stdio.h>
int main(){
    int mark1,mark2,mark3;
    float result = 0;
    float calc = 0;
    int sum = 0;
    printf("Enter three numbers : \n");
    scanf("%d \n",&mark1);
    scanf("%d \n",&mark2);
    scanf("%d",&mark3);

    // printf("Numbers are : %d , %d , %d",mark1,mark2,mark3);

    sum = mark1 + mark1 + mark3;
    calc = (float)sum/300 ;
    // printf("%f ",calc);
    result = calc * 20;
    
    printf("%f",result);
    

    return 0;
}