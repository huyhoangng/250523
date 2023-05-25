#include <stdio.h>
void main()
{
    int ary[5];
    int i , max,min;
    float avg;
    int total=0;
    for(i=0;i<5;i++)
    {
        printf("Enter number:\n");
        scanf("%d",&ary[i]);
        total += ary[i];
        if (i==0) {
            max = ary[0];
            min = ary[0];
        }
        else {
            if (ary[i] > max)
                max = ary[i];
            if (ary[i] < min)
                min = ary[i];
        }
    }
    avg= (float)total/i;
    printf("\nHighest value entered was %d",max);
    printf("\nMin value entered was %d",min);
    printf("\nAVG=%f",avg);
    printf ("\nTotal= %d",total);
}
