//progarm to find the factors of a given number

#include<stdio.h>
#include<conio.h>

void main()
{

int no, i;

clrscr();

printf("enter the number to find factors\n");
scanf("%d", &no);
printf("factors of number are\n");

 for(i=1;i<=no;i++)
 {
 if(no%i==0)
 printf("%d\t",i);
}


 getch();
 }
