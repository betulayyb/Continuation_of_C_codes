#include "graphics.h"
main()
{
void readimagefile(

    const char* title=NULL,	

    int left=0, int right=0, int top=INT_MAX, int bottom=INT_MAX

    );
    
#include  <graphics.h>
#include <conio.h>  
//grafik penceresini a��yoruz 700 eni, 500 boyunda    
initwindow(298,388);        
readimagefile("ornek.jpg",96,96,298,388);    
 /* resmin ad�n� ve sol, �st,sa�,alt �eklinde s�ras�yla     
     koordinatlar�n� yaz�yoruz. Koordinatlar� bu resim i�in yazd�m      
     onu siz de�i�tirin kendi resminizin boyutuna g�re. */
getch(); //ekranda beklemesi ama�l� kulland�m.    
closegraph();  //grafik penceresini kapat�yoruz.    
}
}
