#include<conio.h>
#include<stdio.h>
void main()
{
char str[50],rev[50];
int j,i,k,count=0;
clrscr();
printf("welcome!!\n enter string:-");
gets(str);
for(i=0;str[i]!='\0';i++)
count++;
for(j=count-1,k=0;j>=0;j--,k++)
{
rev[k]=str[j];
}
rev[k]='\0';
printf("\n the reverse string :-");
puts(rev);
getch();
}