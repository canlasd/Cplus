#include <iostream.h>
#include <conio.h>
#include <math.h>

void main(void)
{
   float a,b,c;

	cout<<"\n\tInput value for a : ";
   cin>>a;
   cout<<"\n\tInput value for b : ";
   cin>>b;

   c=sqrt(pow(a,2)+pow(b,2));

   cout<<"\n\thypotenuse = "<<c;

	getch();
}