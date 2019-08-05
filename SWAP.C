//program to swap two number using third variable

#include<conio.h>
#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value to be swapped\n");
scanf ("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("\nvalue after swapping of a & b is %d %d" ,a,b);
getch();
}