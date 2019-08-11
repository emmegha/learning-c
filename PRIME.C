	   //prime number

#include<stdio.h>
#include<conio.h>
void main()
{

int n,i,ans;
clrscr();
printf("enter the number you want to check prime or not\n");
scanf("%d" ,&n);
for(i=2;i<=n/2;i++)
ans=n%2;
if(ans==0)
{
printf("number is not prime");
}
else
{
printf("number is prime");
}
getch();
}
