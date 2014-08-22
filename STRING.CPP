/* Write a C++ program which will accept 2 strings.
	a) Count the number of characters in each string.
   b) Arrange these strings alphabetically.
   c) Concatenate these strings.
   Display the results. */


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main(void)
  {
  char first[20],second[20],temp[20];

  clrscr();
  cout<<"\n\tInput the first string  : "; gets(first);
  cout<<"\n\tInput the second string : "; gets(second);

  //solution for a)
  cout<<"\n\tThe first string has "<<strlen(first)<<" characters.";
  cout<<"\n\tThe second string has "<<strlen(second)<<" characters.";

  //solution for b)
  int n;
  n=strcmpi(first,second);
  if(n/*strcmpi(first,second)*/>0) //strcmpi(s1,s2)
    {
    strcpy(temp,first);
    strcpy(first,second);
    strcpy(second,temp);
    }
  cout<<"\n\n\tArrange strings alphabetically :";
  cout<<"\n\t"<<first;
  cout<<"\n\t"<<second;

  //solution for c)
  strcat(first,second);
  cout<<"\n\n\tAfter concatenation :";
  cout<<"\n\t"<<first;
  cout<<"\n\t"<<second;

  int pass=1;
  char charTemp;
  n=strlen(first);
  while(pass<n)//strlen(first))
   {
   for(int i=0;i<(strlen(first)-pass);i++)
   {
   	if(first[i]>first[i+1])
      {
      	charTemp=first[i];
         first[i]=first[i+1];
         first[i+1]=charTemp;
      }
   }
   pass++;
   }

   cout<<"\n\n\tThe characters when sorted are : ";
   for(int i=0;i<strlen(first);i++)
   {
   	cout<<"\n\t"<<first[i];
   }

  getch();
  }




