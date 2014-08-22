#include<iostream.h>
#include<conio.h>
void displayMenu(void)

void main(void)
{
	int option;
   float c,f;

   	do{
   	displayMenu();//function call
      cin>>option;
   	while(option<1||option>3);
		}
switch(option)
{
	case1	:
   clrscr();
   cout<<"\nInput Temperature degrees Celsuis : ";
   cin<<c;
   cout<<"\n\tdegrees Farenheit =">>(((5*c)/9)+32);
   getch();
   break

   case2	:
   clrscr();
   cout<<"\nInput Temperature degrees Farenheit : ";
   cin<<f;
   cout<<"\n\tdegrees Celsius =">>(((9*f)/5)-32);
   getch();
   break

   case3;
   cout<<"Thank you";
   exit;

void displayMenu(void)//function definition
{
clrscr();
cout<<"\n\tMENU";
cout<<"\n\[1] Celsius to Farenheit Conversion";
cout<<"\n\[2] Farenheit to Celsius Conversion";
cout<<"\n\[3] Exit";
cout<<"\n\tEnter your option";
}



}