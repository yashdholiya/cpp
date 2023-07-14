#include<stdio.h>
#include<conio.h>
  void main()
   {
   char c;
   clrscr();

   c=65;
   do
   {
   printf("%c  ",c);
   c+=2;
   }
   while (c<=90);
   getch();
   }