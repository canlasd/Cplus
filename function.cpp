#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void displayMenu(void); //funtion prototype
void computePerimeter(float,float);
float computeArea(float,float);

void main(void)
{
	int option;
   float l,w,b,h,areaT;

   do{
   	do{
			displayMenu(); //function call
   		cin>>option;                                        
   	}while(option<1 || option>3);

   switch(option)
   {
   	case 1 : cout<<"\nInput length : ";
   				cin>>l;
   				cout<<"\nInput width : ";
   				cin>>w;
      			computePerimeter(l,w); //no return/accept
               break;

      case 2 : cout<<"\nInput base of triangle : ";
   				cin>>b;
  					cout<<"\nInput height of triangle : ";
   				cin>>h;
               areaT=computeArea(b,h); //return/accept
               cout<<"\narea = "<<areaT;
               getch();
               break;

      case 3 : cout<<"\nGood bye!";
   }
   }while(option==1 ||option==2);
	getch();
}

void displayMenu(void) //function definition
{
	clrscr();
	cout<<"\n\tMENU";
   cout<<"\n[1] Perimeter of a Rectangle";
   cout<<"\n[2] Area of a Triangle";
   cout<<"\n[3] Exit";
   cout<<"\n    Please enter your option --> ";
}

void computePerimeter(float length,float width)
{
   cout<<"\nperimeter = "<<(2*(length+width));
   getch();
}

float computeArea(float base,float ht)
{
	//float area;
   //area = 0.5*base*ht;
   return (0.5*base*ht);
}








