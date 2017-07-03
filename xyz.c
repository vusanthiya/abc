#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n Enter the character");
scanf("%s",c);
if(c>='a' && c<='z')
printf("\n alphabet");
else
printf("\n Not an alphabet");
getch();
}
