//reverse of a number
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y=0,r;
clrscr();
printf("enter the number you want to reverse");
scanf("%d",&x);
while(x!=0)
{
r=x%10;
y=y*10+r;
x=x/10;
}
printf("reverse number is %d\n",y);
getch();
}