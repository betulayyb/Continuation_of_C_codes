#include <graphics.h>
int main() 
{  
int window(400,300); //open a 400x300 graphics window 
moveto(0,0);  
lineto(50,50);  
while(!kbhit()); //wait for user to press a key 
close graphic(); //close graphics window
return 0;  
}
