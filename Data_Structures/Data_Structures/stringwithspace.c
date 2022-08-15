#include <stdio.h>

int main()
{
    char name[50];
    printf("enter string : \n");
    scanf("%[^\n]s",name); // it will ignore the white spaces from the code
    
    printf("%s",name);

    return 0;
}
