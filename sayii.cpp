#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 
{ 
int sayi; 
int i; 
	for (i=1;i<11;i++)
	{
		printf("%d.sayi=",i);
		scanf("%d",&sayi);
	}

    for(i = 1; i < 11; i++) 
    {
    sayi= rand()%2;
    }
    for(i = 1; i < 11; i++) 
    {  
    printf("%d. eleman : %d\n", i, sayi); 
    }
}
