#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int const *YueTongss,int *YueTongs,const int const Time)
{
    int Temp=0;
    int i=0, j=0;
    for( i = 0;i<Time; i++) 
    {
        for( j=i;j<Time;j++) 
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
