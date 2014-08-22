/* Exercise #3
		Write a C++ program which will compute and display the
	factorial of an integer. A negative entry is invalid. */

#include<iostream.h>
#include<conio.h>

void main(void)
  {
  int number,i;

  long factor=1;

  //clrscr();
  do{
    cout<<"\n\tInput an integer : ";
    cin>>number;
    if(number<0)
      cout<<"\n\tInvalid entry...Please try again.";
  }while(number<0);

  for(i=1;i<=number;i++)
    {
    factor*=i; //factor=factor*i;
    }
  cout<<"\n\tFactorial of "<<number<<" = "<<factor<<endl<<"\t";
  getch();
  }