// program 3e 3l�k bir matrisi random( rastgele say� �retme) komutu ile ekrana yazd�r�r. 
#include<stdio.h>
#include<stdlib.h>
int main()
{
��� int i,j;
��� int d[3][3]={};
��� int b;
��� b=rand();
��� 
��� 
��� for(i=0;i<3;i++)
��� {
������������������� printf("\n");� 
������������������� for(j=0;j<3;j++)
������������������� {
������������������� printf("%2d",0+(rand()%10)); //0 ile 10 aras�nda bir say� �retir.
������������������� }
������������������� }
������������������� 
������������������� system("pause");
������������������� }
