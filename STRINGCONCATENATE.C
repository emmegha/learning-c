//Program to concatenate two strings


#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
 char a[50],b[50];
 clrscr();
 printf("Enter your first name:\n");
 gets(a);
 printf("\nEnter your last name:\n");
 gets(b);
 printf("\nYour first name is %s",a);
 printf("\nYour last name is %s",b);
 strcat(a," ");
 strcat(a,b);
 printf("\n\nYour full name is %s");
 puts(a);
 getch();
}

