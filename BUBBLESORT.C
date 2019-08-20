//program for bubble sort


#include<stdio.h>
#include<conio.h>


void main()
{
int a[50];
int i,temp,j,n;
clrscr();
printf("enter the number of elements you want to sort\n");
scanf("%d",&n);
printf("enter the elements for sorting\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)

{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}
}
printf("elements after sorting are\n");
for(i=0;i<n;i++)
{
printf("\n%d\n",a[i]);
}
printf("\n");
getch();
}