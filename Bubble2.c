#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int *YueTongs,int *YueTongss,int Times)
{
    int Temp=0;
    int i=0, j=0,a=0;
    for( i = 0;i<Times; i++) 
    {
        for( j=i;j<Times;j++) 
        {
            if( YueTongss[j] < YueTongss[i] ) 
            {
                Temp = YueTongss[j];
                YueTongss[j] = YueTongss[i];
                YueTongss[i] = Temp;
            }
        }
    }
}
