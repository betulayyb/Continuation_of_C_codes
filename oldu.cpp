#include<stdio.h>
int main()
{
	int dizi[4]={119,121,45,140}; // 4*1 lik de�erleri belirli bir dizi tan�mlad�k
	int esiklenmis_dizi[4]; //4*1 lik de�erleri belirsiz bir dizi tan�mlad�k
	printf(" \n\t ***DIZI*** \n\n");

	int i; // i karakterini int kullanarak atad�k
	for ( i=0;i<4;i++) // i de�erini for d�ng�s�yle 0'dan 3'e kadar art�rd�k
	{
	printf(" \t %d ",dizi[i]); // printf kullanarak diziyi ekrana yazd�rd�k
    }
    printf(" \n\t ***ESIKLENMIS DIZI*** \n\n"); // printf kullanarak ekrana ***ESIKLENMIS DIZI*** yazd�rd�k
{
	for (i=0;i<4;i++){ 
	if (dizi[i]>120) // if komutu kullanarak dizi i�inde ki say�lar� s�ras�yla 120 den b�y�k m� diye kontrol ettik
	printf("\t225  ",esiklenmis_dizi[i]); // 120 den b�y�k ��k�nca o say� yerine 225 yazd�rd�k
	else 
	printf("\t 0  ",esiklenmis_dizi[i]); // 120 den k���k ��k�nca say� yerine 0 yazd�rd�k
}
}
	int matris[4][4]={124,89,45,785,121,112,85,100,145,100,45,485,134,100,75,130}; //4*4 l�k de�erleri belirli olan bir matris tan�mlad�k
	int esiklenmis_matris[4][4]; //4*4 l�k de�erleri belli olmayan bir matris tan�mlad�k
	printf(" \n\t ***MATRIS*** \n\n"); //printf kullanarak ekrana ***MATRIS*** yazd�rd�k
	int j;// j de�erini tan�mlad�k
	for ( i=0;i<4;i++)	{  // i de�erini for d�ng�s�yle 0'dan 3'e kadar art�rd�k
		for ( j=0;j<4;j++){ // j de�erini for d�ng�s�yle 0'dan 3'e kadar art�rd�k
	printf(" \t %d ",matris[i][j]); // printf kullanarak matrisi ekrana yazd�rd�k
    }
    printf("\n");
}
    printf(" \n\t ***ESIKLENMIS MATRIS*** \n\n");  //printf kullanarak ekrana *** ESIKLENMIS MATRIS*** yazd�rd�k
{
	for (i=0;i<4;i++){
		for ( j=0;j<4;j++){
	if (matris[i][j]<120)  // if komutu kullanarak matris i�inde ki say�lar� s�ras�yla 120 den b�y�k m� diye kontrol ettik
	printf("\t225  ",esiklenmis_matris[i][j]); //120 den b�y�k ��k�nca o say� yerine 225 yazd�rd�k
	else 
	printf("\t 0  ",esiklenmis_matris[i][j]); //120 den k���k ��k�nca say� yerine 0 yazd�rd�k
}
printf("\n");
}
}
}
