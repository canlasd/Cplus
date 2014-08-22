#include <iostream.h>
#include <conio.h>

void main(void)
{
	const int m=123;
   volatile int n=567;

   m=100;
   n=890;
	getch();
}