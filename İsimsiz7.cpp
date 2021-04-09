#include<stdio.h>
float pi_ile_carp(float sayi)
{
	const float pi=3.142857;
	float sonuc;
	sonuc=sayi*pi;
	return sonuc;
}
main()
{
	const float pi=3.142857;
	float A;
	float Hesapla;
	printf("pi sayýsý ýle carpmak ýstedýgýnýz sayýyý gýrýnýz=");
	scanf("%f",&A);
	Hesapla=pi_ile_carp(A);
	//printf("Sonuc=%f\n",Hesapla);
	printf("%f*%f=%f",A,pi,Hesapla);
}
