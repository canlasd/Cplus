#include<iostream.h>
#include<conio.h>


void main (void)
{
int n;
char answer;
do{
clrscr();
cout<<"\n\tinput an integer-->";
cin>>n;
for(int j=1;j<=n;j++)
{
	for(int i=1;i<=n;i++)
   {cout<<'x';
   }
   cout<<endl;
}

cout<<"\n\tInput again? [y/n] -->";
cin>>answer;
}while(answer=='y'|| answer=='Y');


getch();
}