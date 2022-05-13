
#include <stdio.h>
#include <string.h>

int main()
{
    char list1[4][20] = {"LUKE","WAYNE","ROONEY","SHAW"};
    char list2[4][25] = {"SHAW","ROONEY","RONALDO","ROONEY"};
    int count = 0;
    
    for(int i = 0; i < 4; i++){
        if(strcmp(list2[i],"RONALDO") == 0){
            
            for(int j = 0; j < 4; j++){
                if(strcmp(list1[i] , list2[j]) == 0){
                    count++;
                }
            }
        }
    }
    
    printf("%d grand children.",count);

    return 0;
}