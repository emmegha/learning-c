//program to print pyramid

#include<stdio.h>
#include<conio.h>
void main()
{
int r,s,p,no,n;
int value=1;
clrscr();
printf("enter the number of row to print\n");
scanf("%d",&no);
n=no;
for(r=1;r<=no;r++)
{
for(s=1;s<=n;s++)
{
printf(" ");
}
n--;
for(p=1;p<=r;p++)
{
printf("%d ",value);
value++;
}
printf("\n");
 }
 getch();
 }