//Program to enter student record(name roll no, course)



#include<stdio.h>
#include<conio.h>
#include<string.h>


union student
{
 char name[50];
 int roll;
 char course[50];
}




stud;
void main()
{
 clrscr();
 printf("Enter Student Name \t ");
 scanf("%s",&stud.name);
 printf("\n");
 printf("STUDENT NAME IS  \t %s",stud.name);
 printf("\n");
 printf("\n");
 printf("Enter Student Roll no \t");
 scanf("%d",&stud.roll);
 printf("\n");
 printf("STUDENT ROLL NO IS  \t %d",stud.roll);
 printf("\n");
 printf("\n");
 printf("Enter Course Name: \t");
 scanf("%s",&stud.course);
 printf("\n");
 printf("COURSE NAME IS \t %s",stud.course);
 getch();
}