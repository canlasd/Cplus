#include<iostream.h>
#include<conio.h>

void main(void)
{
int n;
char again;

do{
clrscr();
cout<<"\nPlease enter a integer : ";
cin>>n;

for(int i=1;i<=n;i++)
  {
  for(int j=1;j<=n;j++)
    {
    cout<<(i*j)<<"\t";
    }
  cout<<endl;
  }
do{
  cout<<"\n\tInput again? (y/n) ";
  cin>>again;
  if(again=='y' || again=='Y')
    break;
    else if(again!='n')
      cout<<"\n\tOnly \'y\' or \'n\' are valid answers!";
}while(again!='n');

}while(again=='y' || again=='Y');
//getch();
}