#include <iostream.h>
#include <conio.h>
#include <math.h>

void main(void)
{
   int minutes,hr,min;

   cout<<"\n\tInput number of minutes --> ";
   cin>>minutes;
   hr=minutes/60;
   min=minutes%60;

   cout<<"\n\t"<<minutes<<" min = "<<hr<<" hr/s and "<<min<<" min";
	getch();
}