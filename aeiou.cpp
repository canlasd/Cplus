#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>

int b,n,a,e,i,o,u;
char name[100],A,E,I,O,U;
void main(void)
  {
  clrscr();
  cout<<"\n\tInput name  : "; gets(name);
  int toupper(name(b));
  n=strlen(name);

  a=0;
  e=0;
  i=0;
  o=0;
  u=0;
  {
  for(b=0;b<n;b++)
    {
	 if (name[b]=='A')
    a++;
    else
    if (name[b]=='E')
    e++
    else
    if (name[b]=='I')
    i++;
    else
    if (name[b]=='O')
    o++
    else
    if (name[b]=='U')
    u++
	 }

    cout<<"\n\tNumber of A="<<a;
    cout<<"\n\tNumber of E="<<e;
    cout<<"\n\tNumber of I="<<i;
    cout<<"\n\tNumber of O="<<o;
    cout<<"\n\tNumber of U="<<u;
  }









  getch();
  }



