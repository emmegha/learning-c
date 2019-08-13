//print table usinf functions

#include<stdio.h>
#include<conio.h>
int table();
void main()
{
int a,b,c;
clrscr();
table();
}
int table()
{
int a,b,c;
printf("enter the number to print table\n");
scanf("%d",&a);
printf("table is\n" );
for(b=1;b<=10;b++)
{
c=a*b;


printf("\n %d*%d=%d",a,b,c);
}
getch();
}
