#include<stdio.h>
int main()
{
	int dizi[4]={119,121,45,140};
	int esiklenmis_dizi[4];
	printf(" \n\t ***DIZI*** \n\n");

	int i=0;
	for ( i=0;i<4;i++)
	{
	printf(" \t %d ",dizi[i]);
    }
    printf(" \n\t ***ESIKLENMIS DIZI*** \n\n");
{
	for (i=0;i<4;i++){
	if (dizi[i]>120)
	printf("\t225  ",esiklenmis_dizi[i]);
	else 
	printf("\t 0  ",esiklenmis_dizi[i]);
}
}
	int matris[4][4]={124,89,45,785,121,112,85,100,145,100,45,485,134,100,75,130};
	int esiklenmis_matris[4][4];
	printf(" \n\t ***MATRIS*** \n\n");
	int j=0;
	for ( i=0;i<4;i++)	{
		for ( j=0;i<4;i++){
	printf(" \n %d ",matris[i][j]);
    }
}
    printf(" \n\t ***ESIKLENMIS MATRIS*** \n\n");
{
	for (i=0;i<4;i++){
		for ( j=0;i<4;i++){
	if (matris[i][j]>120)
	printf("\n225  ",esiklenmis_matris[i][j]);
	else 
	printf("\n0  ",esiklenmis_matris[i][j]);
}
}
}
}


