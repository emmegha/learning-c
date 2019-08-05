//calculate percentage of five program

#include<conio.h>
#include<stdio.h>
void main()
{
float dbms,python,c,cadv,java,total, per;
clrscr();
printf("enter marks of five subjects");
scanf("%f %f %f %f %f",&dbms,&python,&c,&cadv,&java);
total=dbms+python+c+cadv+java;
per=total/5;
printf("total marks is %.0f", total);
printf("total percentage is %.2f", per);
getch();
}