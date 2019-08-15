//palindrome of a string

#include<stdio.h>
#include<conio.h>
void main()
{
char one[20],two[20];
int cmp;
printf("enter the string \n");
scanf("%s", &one);
strcpy(two,one);
strrev(one);
cmp=strcmp(two,one);
if(cmp==0)
{
printf("\n string is palindrome");
}
 else
 {
 printf("\n string is not palindrome");
 }
 getch();
 }