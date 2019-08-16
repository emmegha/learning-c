//program to store number in array & find sum,average of number

#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,sum=0,avg;
clrscr();
printf("\n enter the number you want to add");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\n the sum is %d",sum);
avg=sum/10;
printf("\n the number you entered for average is");
for (i=0;i<10;i++)
{

printf("\n%d",a[i]);
 }
 printf("\n average is %d",avg);
 getch();
 }