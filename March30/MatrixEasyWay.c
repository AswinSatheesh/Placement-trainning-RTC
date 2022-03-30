#include<stdio.h>
int main()
{
    char arr[3][4] ={"rath","inam","tech"}; 
    for (int i=0;i<3;i++){
        scanf("%s",&arr[i][0]);
    }
     for (int i=0;i<3;i++){ //THIS loop is for row.
        printf("%s",arr[i][0]);
    }
    return 0;

}