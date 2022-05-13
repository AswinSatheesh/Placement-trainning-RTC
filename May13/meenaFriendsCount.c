#include <stdio.h>
#include<string.h>

int main()
{
    char s1[4][10] = {"reena" , "kavi" , "kathir" , "abiga"};
    char s2[4][20] = {"meena" , "reena" , "meena" , "isac"};
    int count1 =0;
    int count2 =0;
    int count;
    
    for(int i=0;i<4;i++)
    {
        if(strcmp(s2[i],"meena")==0)
        {
            count1++;
        }
    }
    
    
    
    
    for(int i=0;i<4;i++)
    {
        if(strcmp(s2[i],"meena")==0)
        {
            for(int j=0;j<4;j++)
            {
                if(strcmp(s1[i],s2[j])==0)
                {
                    count2++;
                }
            }
            
        }
    }
    
    count=count1+count2;
    
    printf("%d",count);


    return 0;
}