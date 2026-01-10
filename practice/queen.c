#include <stdio.h>

int board[8][8] = {0};
int solutions = 0;
int check(int row, int col)
{
    int i,j=col; 
    for (i=0;i<row;i++)
        if (board[i][col] == 1)
            return 0;
    for (i=row,j=col;i>=0&&j>=0;i--,j--)
        if (board[i][j] == 1)
            return 0;
    for (i=row,j=col;i>=0&&j<8;i--,j++)
        if (board[i][j] == 1)
            return 0;
    return 1;
}

void placeQueen(int row)
{

    if (row==8)
    {
        for (int r=0;r<8;r++)
        {
            for (int c=0;c<8;c++)
            {
                if (board[r][c] == 1)
                    printf("Q ");
                else
                    printf("* ");
            }
            printf("\n");
        }
        printf("\n"); 
        return;
    }


    for (int col =0;col<8;col++)
    {
        if (check(row,col))
        {
            board[row][col]=1;   
            placeQueen(row+1);   
            board[row][col]=0;   
        }
    }
}

int main()
{
    placeQueen(0);
    return 0;
}
