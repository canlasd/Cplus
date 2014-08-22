#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int displayMenu(void); //funtion prototype
void celsius2Fahrenheit(float celsius);
float fahrenheit2Celsius(float fahrenheit);

void main(void)
{
	int opt;
   float cel,fah,fahren;

   do{
   	do{
			opt=displayMenu(); //function call

   	}while(opt<1 || opt>3);

   switch(opt)
   {
   	case 1 : cout<<"\nInput value in Celsius : ";
   				cin>>cel;
   				celsius2Fahrenheit(cel); //no return/accept
               break;

      case 2 : cout<<"\nInput value in Fahrenheit : ";
   				cin>>fah;

               fahren=fahrenheit2Celsius(fah); //return/accept
               cout<<"\nCelsius = "<<fahren;
               getch();
               break;

      case 3 : cout<<"\nGood bye!";
   }
   }while(opt==1 ||opt==2);
	getch();
}

int displayMenu(void) //function definition
{
	int option;

	clrscr();
	cout<<"\n\tMENU";
   cout<<"\n[1] Coversion from Celsius to Fahrenheit";
   cout<<"\n[2] Coversion from Fahrenheit to Celsius";
   cout<<"\n[3] Exit";
   cout<<"\n    Please enter your option --> ";
   cin>>option;

   return option;
}

void celsius2Fahrenheit(float celsius)
{
   cout<<"\nFahrenheit = "<<(9.0/5*celsius+32);
   getch();
}

float fahrenheit2Celsius(float fahrenheit)
{
	//float area;
   //area = 0.5*base*ht;
   return (5.0/9*(fahrenheit-32));
}








