#include<stdio.h>
int main()
{
	int satir,sutun,i,j;
printf("Matrisin satir sayisini gir > ");
    scanf("%d",&satir);
    printf("Matrisin sutun sayisini gir > ");
    scanf("%d",&sutun);
    printf("Matrisin degerlerini gir > ");
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("\n Deger [%d] [%d] --> ", i+1, j+1);
            scanf("%d", &matris[i][j]);
        }
    }
return 0;
}
