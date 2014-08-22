/* Write a C++ program which will accept 10 integers.
	Determine the mean and median of those integers. */

#include<iostream.h>
#include<conio.h>

void main(void)
  {
  int x[10];
  int i,temp,pass=1;
  float sum=0,mean,median;

  clrscr();
//solving for the mean
  for(i=0;i<10;i++)
    {
	 cout<<"Please enter an integer : ";
    cin>>x[i];
    sum+=x[i]; //sum=sum+x[i];
    }
  mean = sum/10;

//solving for the median
//sorting the array first in descending order
  while(pass<10){
  for(i=0;i<(10-pass);i++)
    {
	 if(x[i]<x[i+1])
      {
		temp=x[i];
		x[i]=x[i+1];
		x[i+1]=temp;
		}
	 }
	 pass++;
  }
  median=(x[4]+x[5])/2.0;

  clrscr();
  cout<<"\nArray values in descending order : ";
  for(i=0;i<10;i++)
    {
    cout<<"\n\t"<<x[i];
    }

  cout<<"\n\n\tMean   = "<<mean<<endl;
  cout<<"\tMedian = "<<median<<endl;

  getch();
  }