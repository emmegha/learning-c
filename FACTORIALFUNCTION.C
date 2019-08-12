//Factorial of a number using functions

#include<stdio.h>
#include<conio.h>
void fact(int);
void main()
{
int n;
clrscr();
printf("enter the number to find factorial \n");
scanf("%d" ,&n);
fact(n);
getch();
}
void fact(int n)
{
int i;
int f=1;

for(i=n;i>=1;i--)
{
f=f*i;
}
printf("factorial is %d\n" ,f);
}