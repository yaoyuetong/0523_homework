#include <stdio.h>
#include <stdlib.h>
#define Size 10
void BubbleSort(const int* ,int *,int);

int main()
{
   int YueTong[10]={9,5,6,7,8,1,2,4,10,3};
    int i=0;
    
    
    printf("�Ƨǫe:");
    
     for( i = 0; i < 10; i++ ) 
    {
        printf("%3d", YueTong[i]);
    }
   
    BubbleSort(YueTong,YueTong,10);
   
    printf("\n\n�Ƨǫ�:");
    for( i = 0; i < 10; i++ )
     {
        printf("%3d", YueTong[i]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
