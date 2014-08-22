/* Exercise #1
		Write a C++ program which will determine the denomination
	of an amount from a user input. Limit the input up to the max
   value of an integer. */

#include <iostream.h>
#include <conio.h>

void main(void)
  {
  int amount,thousands,fiveH,twoHundreds,hundreds,fifty,twenty,ten,five,one;

  clrscr();
  cout<<"\n\tInput an amount : ";
  cin>>amount;
  thousands=amount/1000;
  fiveH=(amount%1000)/500;
  twoHundreds=((amount%1000)%500)/200;
  hundreds=(((amount%1000)%500)%200)/100;
  fifty=(((amount%1000)%500)%100)/50;
  twenty=((((amount%1000)%500)%100)%50)/20;
  ten=(((((amount%1000)%500)%100)%50)%20)/10;
  five=((((((amount%1000)%500)%100)%50)%20)%10)/5;
  one=((((((amount%1000)%500)%100)%50)%20)%10)%5;
  cout<<"\n\tThousand's     = "<<thousands;
  cout<<"\n\tFive Hundred's = "<<fiveH;
  cout<<"\n\tTwo Hundred's  = "<<twoHundreds;
  cout<<"\n\tHundred's      = "<<hundreds;
  cout<<"\n\tFifty's        = "<<fifty;
  cout<<"\n\tTwenty's       = "<<twenty;
  cout<<"\n\tTen's          = "<<ten;
  cout<<"\n\tFive's         = "<<five;
  cout<<"\n\tOne's          = "<<one;
  getch();
  }



