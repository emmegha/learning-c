//sum of two matrix

#include<stdio.h>
#include<conio.h>

void main()

{
int a[10][10];
int b[10][10];
int c[10][10];
int i,j,k,l,m,n,d,e,f,g;
clrscr();
printf("\n  enter number of rows & column in matrix A");
scanf(" %d %d",&k,&l);
printf("\n enter values");
for(i=0;i<k;i++)
{
for(j=0;j<l;j++)
{
scanf("%d" ,&a[i][j]);
}
}
printf("\nenter number of rows & column in matrix B");
scanf("%d %d", &m,&n);

printf("\n enter values");
for(d=0;d<m;d++)
{
for (e=0;e<n;e++)
{
scanf("%d",&b[d][e]);
}
}
printf("\nmatrix you have entered are\n");
for(i=0;i<k;i++)
{
for(j=0;j<l;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n");
for(d=0;d<m;d++)
{
for(e=0;e<n;e++)
{
printf("%d\t",b[d][e]);
}
printf("\n");
}
printf("\nsumis\n\n");
for(f=0;f<k;f++)
{
for(g=0;g<l;g++)
{
c[f][g]=a[f][g]+b[f][g];
printf("%d\t",c[f][g]);
}
printf("\n");
}
getch();
}
