#include <stdio.h>
#include<string.h>

int main()
{
    char s1[4][10] = {"luke" , "wayne" , "rooney" , "shaw"};
    char s2[4][20] = {"shaw" , "rooney" , "ronaldo" , "rooney"};
    int count =0;
    
    for(int i=0;i<4;i++)
    {
        if(strcmp(s2[i],"ronaldo")==0)
        {
            for(int j=0;j<4;j++)
            {
                if(strcmp(s1[i],s2[j])==0)
                {
                    count++;
                }
            }
            
        }
    }
    
    printf("%d",count);


    return 0;
}