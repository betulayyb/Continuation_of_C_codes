#include <graphics.h>
int main() 
{  
initwindow(400,300); //open a 400x300 graphics window 
moveto(0,0);  
lineto(50,50);  
while(!kbhit()); 
closegraph(); 
return 0;  
}

