#include <stdio.h>
#include <math.h>

int main (int argc, char*argv[])
{
    int arr[2][3];
    int row, col;

    for (row=0; row<2;row++)
    {
        for (col=0;col<3;col++)
        {
            printf("\nenter a number at [%d][%d]:", row, col);
            scanf ("%d", &arr[row][col]);
        }
    }
    for(row=0;row<2;row++)
    {
        for (col=0; col<3; col++)
        {
            printf("the number at [%d][%d] is %d\n", row, col, arr[row][col]);
        }
    }
    return 0;
}