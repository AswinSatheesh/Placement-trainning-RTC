
#include <stdio.h>


int main()
{
    int sub1_mark1, sub1_mark2, sub2_mark1, sub2_mark2;
    int result1, result2;
    
    printf("Enter the Malayalam score :");
    scanf("%d", &sub1_mark1);
    
    printf("Enter the English score :");
    scanf("%d", &sub1_mark2);
    
    result1 = sub1_mark1 + sub1_mark2;
    printf("first two subjects total marks is : %d\n",result1);
    
    printf("Enter the java score :");
    scanf("%d", &sub2_mark1);
    
    printf("Enter the python score :");
    scanf("%d", &sub2_mark2);
    
    result2 = sub2_mark1 + sub2_mark2;
    printf("Second two subjects total marks is : %d\n",result2);
    
    if(result1 > result2){
        printf("Result1 is greater!");
    }
    else{
        printf("Result2 is greater");
    }
    

    return 0;
}