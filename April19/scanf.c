#include<stdio.h>
int main(){
    char max[100];
    printf("Enter the string : ");
    // scanf("%s",max); //by using this sanf only one word is able to print(eg : Aswin Satheesh - Aswin will only print)
    scanf("%[^\n]%*c", max);  //In order to take a line as input, you can use scanf("%[^\n]%*c", s);
    
    printf("%s",max);

    return 0;
}