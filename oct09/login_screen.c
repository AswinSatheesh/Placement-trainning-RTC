// 1.Design a login screen with username and password, where username and password will be authenticated with given hard coded username and password. 
// While entering password, password character will display even backspace and delete will work
// Sample out:
// Enter User Name: user001
// Enter Password:******
// LOGIN SUCCESS. 
#include<stdio.h>
#include<string.h>
int main()
{
    char registerusername[50];
    printf("username to register :\n");
    scanf("%s",registerusername);
    char registeruserpassword[50];
    printf("Password to register : \n");
    scanf("%s",registeruserpassword);
    char checkname[50];
    char checkpass[50];
    printf("Enter your registerusername:\n");
    scanf("%s",checkname);
    printf("Entered name : %s \n",checkname);
    printf("Enter your password: \n");
    scanf("%s",checkpass);
    printf("Entered password : %s",checkpass);
    if(strcmp(registerusername,checkname) == 0 && strcmp(registeruserpassword,checkpass)== 0) // string comparision using 'strcmp' function
    // if((registerusername == checkname) == 0 && checkpass == registeruserpassword) // string comparision using normall way but not case sensitive.
    {
        printf("\n Login Succesfully \n");
    }
    else
    {
        printf("\n Incorrect Password or registerusername!!!");
    }
    return 0;
}