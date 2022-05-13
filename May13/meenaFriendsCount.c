/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char nameList1 [4][20] = {"Reena","Kavi","Kathir","Abiga"};
    char nameList2 [4][20] = {"Meena","Reena","Meena","Isac"};
    
    int count = 0;

    
    for(int i = 0; i < 4; i++){
        if(strcmp(nameList2[i],"Meena") == 0){
            count++;
        }
    }
    
    for(int j = 0; j < 4; j++){
        if(strcmp(nameList2[j],"Meena")== 0){
            for(int k = 0; k <4; k++){
                if(strcmp(nameList1[j],nameList2[k]) == 0){
                    count++;
                }
            }
        }
    }

    printf("Meena's friends Total count = %d",count);
    return 0;
}
