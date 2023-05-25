#include <stdio.h>
void main3()
{
    int ary[5];
    int i, high;

    for(i=0;i<5;i++)
    {
        printf("Enter number:\n");
        scanf("%d",&ary[i]);

    }
    high = ary[0];
        for(i=1;i<5;i++) {
            if (ary[i] > high)
                high = ary[i];
        }

    printf("\nHighest value entered was %d",high);

}
