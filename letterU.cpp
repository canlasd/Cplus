#include<iostream.h>
#include<conio.h>

void main(void)
{
int n;
char again;

do{
do{
clrscr();
cout<<"\nInput an integer : ";
cin>>n;
if(n<3){
  cout<<"\nInvalid input!";
  getch();
  }
}while(n<3);
for(int i=1;i<n;i++)//i<=n-1
{
cout<<'*';
for(int j=1;j<(n-1);j++)//j<=n-2
  {
  cout<<' ';
  }
cout<<'*'<<endl;
}
  cout<<' ';
  for(int k=1;k<(n-1);k++) //k<=n-2
    {
    cout<<'*';
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