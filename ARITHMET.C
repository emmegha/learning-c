//program to perforn arithmetic operations

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,result,choice;
clrscr();
printf("\n enter the number on which you want to perform operations");
scanf("%d %d",&a, &b);
printf("\n1 for addition");
printf("\n2 for subtraction");
printf("\n3 for multiply");
printf("\n4 for division");
printf("\nenter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
result=a+b;
printf("addition is %d",result);
break;

case 2:
if(a>b)
result=a-b;
else
result=b-a;
printf("subtraction is %d",result);
break;

case 3:
result=a*b;
printf("multiplication is %d",result);
break;

case 4:
result = a/b;
printf("divison is %d",result);
break;
default:
printf("wrong option");
}
getch();
}
