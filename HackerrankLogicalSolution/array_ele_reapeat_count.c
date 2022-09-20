#include <stdio.h>

int count_occur(int a[], char map[], int num_elements, int start);
void print_array(int a[], int num_elements);

int main(void)
{
    int a[20] = {2, 5, 0, 5, 5, 66, 3, 78, -4, -56, 2, 66, -4, -4, 2, 0, 66, 17, 17, -4};
    char map[20] = {0};
    int num_occ, i;

    printf("\nArray:\n");
    print_array(a, 20);

    for (i = 0; i < 20; i++)
    {
        if (map[i] == 0) {
            num_occ = count_occur(a, map, 20, i);
            printf("The value %d was found %d times.\n", a[i], num_occ);
        }
    }
}

int count_occur(int a[], char map[], int num_elements, int start)
/* checks array a for number of occurrances of value */
{
    int i, count = 0, value = a[start];

    for (i = start; i < num_elements; i++)
    {
        if (a[i] == value)
        {
            map[i] = 1;
            ++count; /* it was found */
        }
    }
    return (count);
}

void print_array(int a[], int num_elements)
{
    int i;
    for (i = 0; i< num_elements; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}