#include <stdio.h>
int count_occur(int a[],char map[],int num_elements,int start);
void print_array(int a[], int num_elements);
int main()
{
    int a[] = {1,0,1,0,0,2};
    int length = sizeof(a)/sizeof(a[0]);
    char map[20] = {0};
    int num_occ, i;

    printf("\nArray:\n");
    print_array(a,length);

    for(i = 0; i<length;i++)
    {
        if(map[i] == 0){
            num_occ = count_occur(a,map,length,i);
            printf("The value %d was found %d times.\n",a[i],num_occ);
        }
    }

    int count_occut(int a[],char map[],int num_elements, int start)
    {
    int i, count = 0, value = a[start];
    for(i = start; i<num_elements;i++)
    {
        if(a[i] == value)
        {
            map[i] =1;
            ++count;
        }
    }
    return (count);
    }

    void print_array(int a[],int num_elements)
    {
    int i;
    for(i = 0; i<num_elements;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }
    
    return 0;
}

