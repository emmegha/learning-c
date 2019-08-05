//program to show the use of conditional operator

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf( "enter the value of A & B\n");
scanf("%d %d" ,&a, &b);
printf("is A is greater than B\n");
c=a>b?0:1 ;

if (c==0)
printf("true\n");
else if (c==1)
printf("false\n");
getch();
}