#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int* ,int);

int main()
{
   int YueTong[10]={9,5,6,7,8,1,2,4,3,10};
    int i=0;
    
    
    printf("�Ƨǫe:");
    
     for( i = 0; i < 10; i++ ) {
        printf("%3d", YueTong[i]);
    }
   
    BubbleSort(YueTong,10);
   
    printf("\n\n�Ƨǫ�:");
    for( i = 0; i < 10; i++ ) {
        printf("%3d", YueTong[i]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
