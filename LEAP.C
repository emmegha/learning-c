//program to find that entered number is leap year or not

#include<conio.h>
#include<stdio.h>
void main()
{
int y;
clrscr();
printf("enter the year to find leap year or not \n");
scanf("%d", &y);
if(y%4==0)
printf("year is leap");
else
printf("year is not leap");
getch();
}
