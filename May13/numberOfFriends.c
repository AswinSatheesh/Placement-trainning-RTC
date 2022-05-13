//Write a program to count the number of friends of "meena". Friends of meena's friends also her friends.
/* <Reena,Meena>
   <Kavi,Reena>
   <Kathir,Meena>
   <Abiga,Isac>  */

#include<stdio.h>
int main(){
    char NameList0[100][100] = {"Reena","Meena"};
    char NameList1[100][100] = {"Kavi","Reena"};
    char NameList2[100][100] = {"Kathir","Meena"};
    char NameList3[100][100] = {"Abiga","Isac"};
    int count = 0;
    int j = 0;
    // for(int i = 0; i < 2; i++){
    //     if(NameList0[j][i] == "Meena"){
    //         count++;
    //         j++;
    //     }
    // }
    

    printf("Meena's friends count : %d ",count);

    return 0;
}