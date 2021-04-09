// program 3e 3lük bir matrisi random( rastgele sayý üretme) komutu ile ekrana yazdýrýr. 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int d[3][3]={};
    int b;
    b=rand();
    
    
    for(i=0;i<3;i++)
    {
                    printf("\n");  
                    for(j=0;j<3;j++)
                    {
                    printf("%2d",0+(rand()%10)); //0 ile 10 arasýnda bir sayý üretir.
                    }
                    }
                    
                    system("pause");
                    }
