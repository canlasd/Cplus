#include <iostream.h> //cin>>, cout<<
#include <conio.h> //getch(), gotoxy()

void main(void)
{
   //displaying at the center
	gotoxy(32,12);
   cout<<"Programming";
   gotoxy(43,13);
   cout<<"in";
   gotoxy(45,14);
   cout<<"C++";

   //displaying at the corners
	gotoxy(1,25);
   cout<<"C++";
   gotoxy(78,25);
   cout<<"C++";
   gotoxy(1,1);
   cout<<"C++";
   gotoxy(78,1);
   cout<<"C++";

   getch(); //read key w/o return
}