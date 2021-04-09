#include<stdio.h>
int main()
{
	int i,p,y;
	printf("i=\t",i);
	scanf("%d",&i);
	int u[i][i];
	for (p=0;p<i;p++)
	{
	for (y=0;y<i;y++)
	{
	if (y==p) 
	{
	u[i][i]=1;
    }  	
	else
	{
	u[i][i]=0;
	}	
	printf("%d\t",u[i][i]);
    }
    printf("\n\n");
}
}
