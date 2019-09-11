//Program to show input and output operations using string library functions.



#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[50];
 clrscr();
 printf("Enter a string:\n");
 gets(a);
 printf("\nYour input is:\n");
 puts(a);
 getch();
}
