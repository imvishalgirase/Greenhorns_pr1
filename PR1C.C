#include<stdio.h>
#include<conio.h>
void main()
{

  int a=4,b=8;
  clrscr();
  printf("value of a=%d\n",a);
  printf("value of b=%d\n",b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf(" swap value of a=%d\n",a);
  printf("swap value of b= %d",b);
  getch();
  }