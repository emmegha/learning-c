//transpose of a matrix

#include<stdio.h>
#include<conio.h>

void main()
{
int a[10][10];
int b[10][10];
int i,j,r,c;
clrscr();
printf("\n enter the number of rows & col\n");
scanf("%d %d", &r,&c);
printf("enter the elements\n" );
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}}
for (i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[i][j]=a[j][i];
}
}
printf("\ntranspose of matrix is\n" );
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("\t%d",b[i][j]);
}
printf("\n");
}
getch();
}
