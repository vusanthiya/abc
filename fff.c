#include<stdio.h>
#include<conio.h>
void main();
{
int i,n,sum=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}
