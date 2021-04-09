#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>



int main() 
{
	int gcc,a=0,b=0,x=0,z=0;
	int m[3][3]={{3,1,7},{5,2,6},{4,8,6}};
	printf("\nOYUNU YON TUSLARIYLA OYNAYINIZ\n");
	Sleep(600);
	while(true)
	
	
	system("cls");
	for(int i=0;i<3;i++)
	{
		
		printf("\n\n");
		for(int j=0;j<3;j++)
		
		{
			printf("\t\t%d\t",m[i][j]);
		}
		printf("\n");
		
		
	}
	
	if(a==-3)a=-2;
	if(b==-3)b=-2;
	if(a==3)a=2;
	if(b==3)b=2;
	if(x==3)x=2;
	if(x==-3)x=-2;
	if(z==3)z=2;
	if(z==-3)z=-2;
	
	switch(getch())
	
	{
		
		case 72:
		for(int i=2+a;i>1-x;i--)
		{
			for(int j=2+b;i>1-z;j--)
			{
				gcc=m[i][j];
				m[i][j]=m[i-1][j];
				m[i-j][j]=gcc;
				a-=1;
				
			}
			
			}
			x+=1; break;
			case 75:
			for(int i=2+a;i>1-x;i--)	
		    
		    {
		    	for(int j=2+b;j<1-x;j--)
		    	{
		    		gcc=m[i][j];
		    		m[i][j]=m[i][j-1];
		    		m[i][j-1]=gcc;
		    		b-=1;
		    		
		    		
				}
			}z+=1;  break;
			
	case80:if(a==-1 || a==-2)
	{
		for(int i=2+a;i<3-x;i++)
		{
			for(int j=2+b;j<3-z;j++)
			{
				gcc=m[i][j];
				m[i][j]=m[i+1][j];
				m[i+1][j]=gcc;
				a+=1;
			}
		}x-=1;  break;
	}break;
	
	
	case 77:if(b==-1 || b==-2)
	{
		for(int i=2+a;i<3-x;i++)
		{
			for(int j=2+b;j<3-z;j++)
			{
				gcc=m[i][j];
				m[i][j]=m[i][j+1];
				m[i][j+1]=gcc;
				b+=1;
			}
		}z-=1;  break;
	}break;
	
	
	
	
	case'a':return 0;
	
}
printf("\n\nTEBRÝKLER OYUNU BITIRDINIZ");
printf("\n\n\nCIKMAK ISTIYORSANIZ 'Q' BASINIZ");
Sleep(500);
getch();
}
	
	
	
	
	
	

