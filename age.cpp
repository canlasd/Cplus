#include <iostream.h>
#include <conio.h>

void main(void)
{
	int age;

	cout<<"\n\tInput an age --> ";
   cin>>age;

   if(age<=2)
   	cout<<"\n\tbaby";
   else if(age<=4)
   	cout<<"\n\ttoddler";
   else if(age<=9)
   	cout<<"\n\tkid";
   else if(age<=12)
   	cout<<"\n\tadolescent";
   else if(age<=19)
   	cout<<"\n\tteenager";
   else if(age<=25)
   	cout<<"\n\tyoung adult";
   else
   	cout<<"\n\tadult";

   getch();
}