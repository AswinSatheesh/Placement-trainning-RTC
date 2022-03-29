//prgm for add the odd position in the given number  i/p = 5,3,8,9,1,2   o/p = 1+8+5 =14

#include <stdio.h>
int main(){
    int sum = 0;
    int arr[6] = {5, 3, 8, 9, 1, 2};
    int length = 6;
    for(int i = length -2; i >= 0; i=i-2){
        sum = sum + arr[i];
    }
    printf("sum = %d",sum);

    return 0;
}