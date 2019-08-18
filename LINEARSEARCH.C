//program to perform linear search


#include<stdio.h>
#include<conio.h>

void main()
{
int a[10],i,key,flag=0;
clrscr();
printf("\nenter 10 elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element you want to search\n");
scanf("%d",&key);
for(i=0;i<10;i++)
{
if (key==a[i])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("number is found in the list at %d/n" ,i+1);
}
else
{
printf("number is not found in the list");
}
getch();
}