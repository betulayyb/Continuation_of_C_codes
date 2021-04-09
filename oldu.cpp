#include<stdio.h>
int main()
{
	int dizi[4]={119,121,45,140}; // 4*1 lik deðerleri belirli bir dizi tanýmladýk
	int esiklenmis_dizi[4]; //4*1 lik deðerleri belirsiz bir dizi tanýmladýk
	printf(" \n\t ***DIZI*** \n\n");

	int i; // i karakterini int kullanarak atadýk
	for ( i=0;i<4;i++) // i deðerini for döngüsüyle 0'dan 3'e kadar artýrdýk
	{
	printf(" \t %d ",dizi[i]); // printf kullanarak diziyi ekrana yazdýrdýk
    }
    printf(" \n\t ***ESIKLENMIS DIZI*** \n\n"); // printf kullanarak ekrana ***ESIKLENMIS DIZI*** yazdýrdýk
{
	for (i=0;i<4;i++){ 
	if (dizi[i]>120) // if komutu kullanarak dizi içinde ki sayýlarý sýrasýyla 120 den büyük mü diye kontrol ettik
	printf("\t225  ",esiklenmis_dizi[i]); // 120 den büyük çýkýnca o sayý yerine 225 yazdýrdýk
	else 
	printf("\t 0  ",esiklenmis_dizi[i]); // 120 den küçük çýkýnca sayý yerine 0 yazdýrdýk
}
}
	int matris[4][4]={124,89,45,785,121,112,85,100,145,100,45,485,134,100,75,130}; //4*4 lük deðerleri belirli olan bir matris tanýmladýk
	int esiklenmis_matris[4][4]; //4*4 lük deðerleri belli olmayan bir matris tanýmladýk
	printf(" \n\t ***MATRIS*** \n\n"); //printf kullanarak ekrana ***MATRIS*** yazdýrdýk
	int j;// j deðerini tanýmladýk
	for ( i=0;i<4;i++)	{  // i deðerini for döngüsüyle 0'dan 3'e kadar artýrdýk
		for ( j=0;j<4;j++){ // j deðerini for döngüsüyle 0'dan 3'e kadar artýrdýk
	printf(" \t %d ",matris[i][j]); // printf kullanarak matrisi ekrana yazdýrdýk
    }
    printf("\n");
}
    printf(" \n\t ***ESIKLENMIS MATRIS*** \n\n");  //printf kullanarak ekrana *** ESIKLENMIS MATRIS*** yazdýrdýk
{
	for (i=0;i<4;i++){
		for ( j=0;j<4;j++){
	if (matris[i][j]<120)  // if komutu kullanarak matris içinde ki sayýlarý sýrasýyla 120 den büyük mü diye kontrol ettik
	printf("\t225  ",esiklenmis_matris[i][j]); //120 den büyük çýkýnca o sayý yerine 225 yazdýrdýk
	else 
	printf("\t 0  ",esiklenmis_matris[i][j]); //120 den küçük çýkýnca sayý yerine 0 yazdýrdýk
}
printf("\n");
}
}
}
