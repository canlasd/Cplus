#include <iostream.h>
#include <conio.h>

void main(void)
{
	int x,y,sum,diff,prod;
   float quo;

	cout<<"\n\tInput 2 integers : ";
   cin>>x>>y;

   sum=x+y;
   diff=x-y;
   prod=x*y;
   quo=(float)x/y;

   cout<<"\n\tsum = "<<sum;
   cout<<"\n\tdifference = "<<diff;
   cout<<"\n\tproduct = "<<prod;
   cout<<"\n\tquotient = "<<quo;

	getch();
}