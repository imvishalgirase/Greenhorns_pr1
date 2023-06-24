#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int bs,hra=11,da=10,ta=7,gs;
  printf("bs=");
  scanf("%d",&bs);
  gs=(bs*hra/100+bs*da/100+bs*ta/100)+bs;
  printf("gs=%d",gs);
  getch();
  }
