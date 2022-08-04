#include<stdio.h>
#include<stdlib.h>

 int myfun()
    {   
        static int count = 0;
        count++;
        return  count;
    }
    int main()
    {
   
        printf("%d ", myfun());
        printf("%d ", myfun());
    
    }