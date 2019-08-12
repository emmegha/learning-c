//swapping of two variable using function(call by value);

#include<stdio.h>
#include<conio.h>

void swap(int,int);
void main()
{
int a,b;
clrscr();
printf("enter the first value for sawapping/n");
scanf("%d",&a);
printf("enter the second value/n");
scanf("%d",&b);
swap(a,b);
getch();
}
void swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
printf("value of a after swapping is %d/n",x);
printf("value of b after swapping is %d /n",y);
}



