#include <stdio.h>
#include <conio.h>
int main()
{
    int matris[100][100];
    int satir, sutun, i, j;
    printf("Matrisin satir sayisini gir > ");
    scanf("%d",&satir);
    printf("Matrisin sutun sayisini gir > ");
    scanf("%d",&sutun);
    printf("Matrisin degerlerini gir > ");
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("\n Deger [%u] [%u] --> ", i+1, j+1);
            scanf("%u", &matris[i][j]);
        }
    }
    printf("\nolusturulan matris:\n\n");
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%3u ", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}
