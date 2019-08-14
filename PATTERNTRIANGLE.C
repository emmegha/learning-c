//program to print right angle triangle

#include<stdio.h>
#include<conio.h>
void main()
{
int r,p,no;
printf("enter the number of rows you want to print");
scanf("%d",&no);

for(r=1;r<=no;r++)
{
for(p=1;p<=r;p++)
{
printf("%d ",r);
}
printf("\n")  ;
}
getch();
}