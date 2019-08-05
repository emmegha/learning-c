//TO FIND WHEATER THE NUMBER IS ODD OR EVEN

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number to find odd or even");
scanf("%d",&a);
if(a%2==0)
printf("the number is even");
else
printf("the number is odd");
getch();
}