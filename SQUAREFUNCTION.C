//Write a function which accept only one argument that is a number n and return its square


#include<stdio.h>
#include<conio.h>

void square(int);
void main()
{
int n;
scanf("%d",&n);

square(n);
getch();
}

void square(int n )
{
int sq;
 sq=n*n;

printf("%d",sq);
}