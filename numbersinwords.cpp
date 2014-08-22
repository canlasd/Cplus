#include<iostream.h>
#include<conio.h>

void main(void)
{
	int number,n,n1,n2,q;
   cout<<"\n\tNumber please -->";
   cin>>number;


   n=number/100;
   n1=number%100/10;
   n2=number%100%10;

switch (n)
{
   case 1: cout<<"\tONE hundred"; break;
   case 2: cout<<"\tTWO hundred"; break;
   case 3: cout<<"\tTHREE hundred"; break;
   case 4: cout<<"\tFOUR hundred"; break;
   case 5: cout<<"\tFIVE hundred"; break;
   case 6: cout<<"\tSIX hundred"; break;
   case 7: cout<<"\tSEVEN hundred"; break;
   case 8: cout<<"\tEIGHT hundred"; break;
   case 9: cout<<"\tNINE hundred"; break;
}

if(n1==1);
n1=q;
{switch (q)
{
   case 1: cout<<"\televen"; break;
   case 2: cout<<"\ttwelve"; break;
   case 3: cout<<"\tthirteen"; break;
   case 4: cout<<"\tfourteen"; break;
   case 5: cout<<"\tfifteen"; break;
   case 6: cout<<"\tsixteen"; break;
   case 7: cout<<"\tseventeen"; break;
   case 8: cout<<"\teighteen";break;
   case 9: cout<<"\tnineteen";break;
}
else
{
 switch (n1)
{
   case 1: cout<<"\tTEN"; break;
   case 2: cout<<"\tTWENTY"; break;
   case 3: cout<<"\tTHIRTY"; break;
   case 4: cout<<"\tFOURTY"; break;
   case 5: cout<<"\tFIFTY"; break;
   case 6: cout<<"\tSIXTY"; break;
   case 7: cout<<"\tSEVENTY"; break;
   case 8: cout<<"\tEIGHTY"; break;
   case 9: cout<<"\tNINETY"; break;
}
switch (n2)
{

   case 1: cout<<"\tONE"; break;
   case 2: cout<<"\tTWO"; break;
   case 3: cout<<"\tTHREE"; break;
   case 4: cout<<"\tFOUR"; break;
   case 5: cout<<"\tFIVE"; break;
   case 6: cout<<"\tSIX"; break;
   case 7: cout<<"\tSEVEN"; break;
   case 8: cout<<"\tEIGHT"; break;
   case 9: cout<<"\tNINE"; break;
   case 10: cout<<"\tTEN"; break;
}

getch();

}