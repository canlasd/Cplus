#include <iostream.h>
#include <conio.h>

void main(void)
{
	int n,sum=0,prod=1;
   char answer;

   do{
   clrscr();
   for(int i=1;i<=5;i++)
   {
      do{
			cout<<"\n\tInput an integer "<<i<<" --> ";
      	cin>>n;
      }while(n<=0);
      sum+=n;//sum=sum+n;
      prod*=n;//prod=prod*n;
   }
   cout<<"\n\tSum     = "<<sum;
   cout<<"\n\tProduct = "<<prod;



   cout<<"\n\tInput again? [y/n] --> ";
   cin>>answer;
   }while(answer=='y' || answer=='Y');

   getch();
}