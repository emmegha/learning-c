//program to add number using pointer



#include<stdio.h>
#include<conio.h>

void main()

{
int a,b,*pa,*pb,pc;

clrscr();

printf("enter the number to add\n");
scanf("%d%d", &a, &b);


pa=&a;
pb=&b;
pc  =  *pa + *pb;
printf("the sum is %d",pc);

getch();
}