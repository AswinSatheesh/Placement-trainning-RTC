/*Example 1:
•	Input:
tiger     -> input string A
ti          -> input string B
•	Output:
ger       -> Output string C
•	Explanation:
After removing “t” and “i” from “tiger”, we are left with “ger”.
So, the answer is “ger”.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    int length1=0,length2=0;
    printf("Enter the string1 : \n");
    scanf("%s",str1);
    length1 = strlen(str1);
    printf("length 1 = %d \n",length1);
    printf("Enter string 2 \n");
    scanf("%s",str2);
    printf("length 2 = %d \n",length2);
    length2 = strlen(str2);
    for(int i = 0; i < length1; i++)
    {
        for(int j =0; j < length2; j++)
        {
            if(str1[i] == str2[j])
            {
                str1[i] = 0;
            }
        }
    }
    printf("\n After deleting: \n");
    for(int k = 0; k < length1 ; k++)
    {
        printf("%c",str1[k]);
    }
    return 0;
}
