#include<stdio.h>
int main()
{
	int a,b,bolme,kalan;
	printf("A=");
	scanf("%d",&a);
	printf("B=");
	scanf("%d",&b);
	bolme=a/b;
	kalan=a-(b*bolme);
	printf("kalan=%d",kalan);
}

