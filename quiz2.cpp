#include<stdio.h>
main()
{
	int i,sonuc;
	i=4;
	sonuc=1;
	while (i>1)
	{
		sonuc=sonuc*i;
		i--;
	}
	printf("Sonuc:%d",sonuc);
}
