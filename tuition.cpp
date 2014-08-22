#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <iomanip.h>
#include <stdio.h>

void main(void)
{
	int code,units;
   char yearName[20];
   float rate,tuition;

	cout<<"\n\tCode --> ";
   cin>>code;
   cout<<"\n\tUnits --> ";
   cin>>units;

   switch(code)
   {
   	case 1 : strcpy(yearName,"Freshman");//yearName="Freshman";
      			rate=545.25;
               break;
      case 2 : strcpy(yearName,"Sophomore");
      			rate=436.75;
               break;
      case 3 : strcpy(yearName,"Junior");
      			rate=327.00;
               break;
      case 4 :
      case 5 : strcpy(yearName,"Senior");
      			rate=218.50;
               break;
      default: strcpy(yearName," ");
      			rate=0;
   }
   tuition=units*rate;

   cout<<"\n\tUnits : "<<units;
   cout<<"\n\tYear  : "<<yearName;
   cout<<"\n\tTuition Fee : "<<setprecision(2)<<\
   	setiosflags(ios::showpoint)<<\
      setiosflags(ios::fixed)<<tuition;
	//printf("\n\tTuition Fee : %5.2f",tuition);
	getch();
}