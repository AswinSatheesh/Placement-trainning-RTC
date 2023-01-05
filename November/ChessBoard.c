// Using two characters: . (dot) and * (asterisk) print a chessboard-like pattern. The first character printed should be * (asterisk).

#include <stdio.h>

void chessBoardPattern(int rC)
{
    int i,j,k = 1;

    for(i=1; i<=rC; i++)
    {
        for(j=1; j<=rC; j++)
        {
            if(k == 1)
            {
                printf("Ü ");
            }
            else
            {
                printf("§ ");
            }

            k =k* -1;
        }

        if(rC % 2 == 0)
        {
            k *= -1;
        }

        printf("\n");
    }

}

int main()
{
    int rowsandColumns;
    printf("Enter the number of rows and columns ");
    scanf("%d", &rowsandColumns);
    chessBoardPattern(rowsandColumns);
    return 0;
}