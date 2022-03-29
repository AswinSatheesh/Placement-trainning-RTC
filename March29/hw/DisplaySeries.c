//Write a prgm to display the series and find the sum.
// 1 + 3 + 5 + 7 .... + n

#include<stdio.h>
int main(){
    int limit;
    printf("Enter the limit : \n");
    scanf("%d",&limit);
    int sum = 0;
    for(int i = 1; i < limit; i = i + 2){
        printf("%d + ", i);
        sum = sum + i;
    }
    printf("\nsum = %d \n", sum);

    return 0;
}