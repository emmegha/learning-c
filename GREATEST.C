#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\nenter the number you want to compare\n");
scanf("%d %d %d",&a,&b,&c);
if ((a>b) && (a>c))
printf("\na is greatest");
else if((b>a) && (b>c))
printf("\nb is greatest");
else
printf("\n c is greatest");
getch();
}