#include <iostream.h>
#include <conio.h>

void main(void)
{
	int number,q,q1;

   cout<<"\n\tInput a number --> ";
   cin>>number;

   q=number%10;
   q1=number%100;
   if(q==1 && q1!=11)
   	cout<<"\n\t"<<number<<"st";
   else if(q==2 && q1!=12)
   	cout<<"\n\t"<<number<<"nd";
   else if(q==3 && q1!=13)
   	cout<<"\n\t"<<number<<"rd";
   else
   	cout<<"\n\t"<<number<<"th";

   getch();

}