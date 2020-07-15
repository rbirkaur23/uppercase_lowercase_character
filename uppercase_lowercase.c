#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("Enter char\n");
scanf("%c",&x);
if(x>=65 && x<=90)
{
  printf("Upper case");
}
else
{
  printf("Not in upper case");
}
getch();
}
