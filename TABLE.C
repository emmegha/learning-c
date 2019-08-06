\\program to print table of a number

#include<stdio.h>
#include<conio.h>
void main()
{
int i,number;
printf("enter the number to print table");
scanf("%d", &number);
for(i=1;i<=10;i++)
{
printf("\n %d * %d = %d" ,number,i,number*i);
}
getch();
}