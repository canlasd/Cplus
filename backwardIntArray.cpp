#include <iostream.h>
#include <conio.h>

void main(void)
{
	int x[5];

   for(int i=0;i<5;i++)
   {
   	cout<<"\n\tInput your integer --> ";
      cin>>x[i];
   }

   for(int i=4;i>=0;i--)
   {
   	cout<<"\n\tbaliktad "<<x[i];
   }

	getch();
}