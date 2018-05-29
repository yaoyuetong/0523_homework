#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int*const ,int const);

int main()
{
    int YueTongs[10]={9,5,6,7,8,1,2,4,3,10};
    int i=0;
    
    
    printf("排序前=");
    
     for( i=0; i<10; i++ ) 
    {
        printf("%3d", YueTongs[i]);
    }
   
    BubbleSort(YueTongs,10);
   
    printf("\n\n排序後:");
    for( i = 0; i < 10; i++ ) 
    {
        printf("%3d", YueTongs[i]);
    }
    
  printf("\n\n");
  system("PAUSE");	
  return 0;
}
