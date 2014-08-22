#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void main(void)
{
	int number,ones,tens,hundreds;
   char answer;

   do{
	clrscr();
   cout<<"\n\t\tEnter a positive integer (1-999) --> ";
   cin>>number;

   hundreds=number/100;
   tens=(number%100)/10;
   ones=((number%100)%10);

   if(number<=0 || number>=1000)
   	cout<<"\n\t\tINVALID!";
   else if(number>10 && number<20)
   {
   	cout<<"\n\t\t";
   	switch(number)
      {
      case 11 : cout<<"ELEVEN"; break;
      case 12 : cout<<"TWELVE"; break;
      case 13 : cout<<"THIRTEEN"; break;
      case 14 : cout<<"FOURTEEN"; break;
      case 15 : cout<<"FIFTEEN"; break;
      case 16 : cout<<"SIXTEEN"; break;
      case 17 : cout<<"SEVENTEEN"; break;
      case 18 : cout<<"EIGHTEEN"; break;
      case 19 : cout<<"NINETEEN"; break;
      }
   }
   else
   {
   	cout<<"\n\t\t";
      switch(hundreds)
      {
      case 1 : cout<<"ONE HUNDRED "; break;
      case 2 : cout<<"TWO HUNDRED "; break;
      case 3 : cout<<"THREE HUNDRED "; break;
      case 4 : cout<<"FOUR HUNDRED "; break;
      case 5 : cout<<"FIVE HUNDRED "; break;
      case 6 : cout<<"SIX HUNDRED "; break;
      case 7 : cout<<"SEVEN HUNDRED "; break;
      case 8 : cout<<"EIGHT HUNDRED "; break;
      case 9 : cout<<"NINE HUNDRED "; break;
      }

      if(tens==1&&ones!=0)
      {
        	switch(ones)
      	{
      		case 1 : cout<<"ELEVEN"; break;
      		case 2 : cout<<"TWELVE"; break;
      		case 3 : cout<<"THIRTEEN"; break;
      		case 4 : cout<<"FOURTEEN"; break;
      		case 5 : cout<<"FIFTEEN"; break;
      		case 6 : cout<<"SIXTEEN"; break;
      		case 7 : cout<<"SEVENTEEN"; break;
      		case 8 : cout<<"EIGHTEEN"; break;
      		case 9 : cout<<"NINETEEN"; break;
      	}
      }
      else
      {
      	switch(tens)
      	{
      		case 1 : cout<<"TEN "; break;
      		case 2 : cout<<"TWENTY "; break;
        		case 3 : cout<<"THIRTY "; break;
      		case 4 : cout<<"FORTY "; break;
      		case 5 : cout<<"FIFTY "; break;
      		case 6 : cout<<"SIXTY "; break;
      		case 7 : cout<<"SEVENTY "; break;
      		case 8 : cout<<"EIGHTY "; break;
      		case 9 : cout<<"NINETY "; break;
      	}
      	switch(ones)
      	{
      		case 1 : cout<<"ONE"; break;
      		case 2 : cout<<"TWO"; break;
      		case 3 : cout<<"THREE"; break;
      		case 4 : cout<<"FOUR"; break;
      		case 5 : cout<<"FIVE"; break;
      		case 6 : cout<<"SIX"; break;
      		case 7 : cout<<"SEVEN"; break;
      		case 8 : cout<<"EIGHT"; break;
      		case 9 : cout<<"NINE"; break;
         }
      }
   }
   cout<<"\n\n\t\tInput again?[y/n] --> ";
   cin>>answer;
   }while(answer=='y' || answer=='Y');
   //getch();
}








