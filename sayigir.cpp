#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 
{ 
int dizi[10]; 
int i; 
	for (i=1;i<11;i++)
	{
		printf("%d.sayi=",i);
		scanf("%d",&dizi[i]);
	}

for(i = 1; i < 11; i++) 
dizi [i]= rand()%1; 

for(i = 1; i < 11; i++) 
printf("%d. eleman : %d\n", i, dizi); 
}
