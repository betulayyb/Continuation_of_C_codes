#include "graphics.h"
main()
{
void readimagefile(

    const char* title=NULL,	

    int left=0, int right=0, int top=INT_MAX, int bottom=INT_MAX

    );
    
#include  <graphics.h>
#include <conio.h>  
//grafik penceresini açýyoruz 700 eni, 500 boyunda    
initwindow(298,388);        
readimagefile("ornek.jpg",96,96,298,388);    
 /* resmin adýný ve sol, üst,sað,alt þeklinde sýrasýyla     
     koordinatlarýný yazýyoruz. Koordinatlarý bu resim için yazdým      
     onu siz deðiþtirin kendi resminizin boyutuna göre. */
getch(); //ekranda beklemesi amaçlý kullandým.    
closegraph();  //grafik penceresini kapatýyoruz.    
}
}
