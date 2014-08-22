/* Write a C++ program which will accept 5 integers and
	output them in descending order.  */


#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void main (void)
  {
  int x[5],i,pass=1,temp;

  //clrscr();

  for(i=0;i<=4;i++)
    {
    cout<<"\n\tEnter an integer : ";
    cin>>x[i];
    }
  while(pass<5)
    {
    for(i=0;i<(5-pass);i++)
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
    cout<<"\n\tThe numbers in descending order are : ";
    for(i=0;i<5;i++)
      {
      cout<<"\n\t"<<x[i];
      }
  getch();
  }