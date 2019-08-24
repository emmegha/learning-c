//program to find  whether a number is armstrong or not


#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
int no, copy,re,n=0,ans=0;

clrscr();

printf("enter the number you want to check\n");
scanf("%d",&no);

copy=no;

while(copy!=0)
{
copy=copy/10;
n++;
}

copy=no;

while(copy!=0)
{
 re=copy%10;
 ans=ans+pow(re,n);
 copy=copy/10;
 }

 if(ans==no)
 {
 printf("%d is a armstrong number\n",no);
  }
  else
  {
  printf("%d is not a armstrong number\n",no);
  }

  getch();
  }

