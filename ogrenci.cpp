#include<stdio.h>

void matris_yazdir( int [ ][ 388], int );
int main( void )
{
int fp
fp=fopen("ornek.jpg","r")
fclose(fp);
}
{
	int matris[ 298 ][ 388] = {}
	matris_yazdir( matris, 298 );

	return 0;
}
void matris_yazdir( int dizi[ ][ 388], int satir_sayisi )
{
	int i, j;
	for( i = 0; i < satir_sayisi; i++ ) {
		for( j = 0; j < 388; j++ ) {
			printf( "%d ", dizi[ i ][ j ] );
		}
		printf( "\n" );
	}
}
