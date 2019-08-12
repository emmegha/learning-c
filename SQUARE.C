//program to print square of a number using function

#include<stdio.h>
#include<conio.h>

void square();
void main()
{
clrscr();
square();
getch();
}

void square()
{
int i ;
printf("\n enter the number to find square");
scanf("%d",&i);
printf("\nsquare is %d",i*i);
}
