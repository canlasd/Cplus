#include <iostream.h>
#include <conio.h>

void main(void)
{
	int x=3,y=6,z=1;

   z+=x++;
   cout<<"\n\tx = "<<x;
   cout<<"\n\tz = "<<z;

   y-=--z+x++;
   cout<<"\n\n\tz = "<<z;
   cout<<"\n\tx = "<<x;
   cout<<"\n\ty = "<<y;

   z=z+y--*2;
   cout<<"\n\n\tz = "<<z;
   cout<<"\n\ty = "<<y;

   x=++x + ++x + ++x;
   cout<<"\n\n\tx = "<<x; 

   getch(); 
}