#include<stdio.h>
main ()
{
	int i,sayi,sayac=0;
	printf("asal mi degil mi ogrenmek istediginiz sayiyi yaziniz= ");
	scanf("%d\n",&sayi);
	for (i=2;i<sayi;i++){
	if (sayi%i==0){
		sayac=1;
	}
}
    if (sayac==0)
		printf("asal say�");
	if (sayac==1)
		printf("asal de�il");
}
