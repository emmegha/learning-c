// program to swap the values of two variables without using third variable

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value you want to sawpped");
scanf("%d %d",&a ,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n value after swapping is %d %d" ,a,b);
getch();
}