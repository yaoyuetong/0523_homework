#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *const YueTongs,int const Time)
{
    int Temp=0;
    int i=0, j=0,a=0;
    for( i = 0;i<Time; i++) 
    {
        for( j=i;j< Time;j++) 
        {
            if( YueTongs[j] > YueTongs[i] ) 
            {
                Temp = YueTongs[j];
                YueTongs[j] = YueTongs[i];
                YueTongs[i] = Temp;
            }
        }
    }
}
