#include <stdio.h>
void main()
{
    int ary[15];
    int i , total,high;
    for(i=0;i<15;i++)
    {
        scanf("%d",&ary[i]);
    }
    high=ary[0];
    for (i=1;i<15;i++)
    {
        if(ary[i]>high)
            high=ary[i];
    }
    printf("\nHighest value entered was %d",high);
}
