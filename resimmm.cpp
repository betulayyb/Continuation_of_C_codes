#include<stdio.h>
int main()
{
	FILE*dosya;
	dosya=fopen("C:\\Users\\Lenovo\\Pictures\\Saved Pictures\\c++odevi1","wb");
	if (dosya==NULL)
	{
		printf("dosya yok!");
	}
	else
	{
			for (int i=1;i<=298;i++){
		for (int j=1;j<=388;j++){
		int a=(i);
		int b=(j);
		
		printf("f[%d][%d]",a,b);
		
		}
	}
	}

	return 0;
}
