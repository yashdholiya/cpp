#include<stdio.h>
#include<conio.h>
  void main()
   {
   int i,n;
   clrscr();
   i=1;
   do
   {
       n=1;
       do
       {
	   printf("%d  ",n);
	   n++;
       }
       while (n<=i);
       printf("\n");
       i++;
   }
   while(i<=5);
   getch();
   }