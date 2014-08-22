#include <iostream.h>
#include <conio.h>

void main(void)
{
	int n;

	cout<<"\n\tInput an integer --> ";
   cin>>n;

   if(n>0)
   	cout<<"\n\tpositive";
   else if(n<0)
   	cout<<"\n\tnegative";
   else
   	cout<<"\n\tzero";

   getch();
}