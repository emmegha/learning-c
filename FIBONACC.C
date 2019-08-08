//fibonacci series

#include<stdio.h>
#include<conio.h>
void main()
{
int f=0,s=1,next,n,i;
clrscr();
printf("\nenter the terms you want to print");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
{
next=i;
}
else
{
next=f+s;
f=s;
s=next;
}
printf("\t%d",next);
}
getch();
}