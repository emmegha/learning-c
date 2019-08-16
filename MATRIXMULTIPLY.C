#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l,m,n,d,e,f,g;
 int c[10][10];
 int a[10][10],b[10][10];
 clrscr();
 printf("Enter the Number of Rows and Columns of Matrix A\n");
 scanf("%d %d",&k,&l);
 printf("Enter the number of Rows and Columns of Matrix B\n");
 scanf("%d %d",&m,&n);
 printf("Enter the value of Matrix A");
 for (i=1;i<=k;i++)
 {
  for (j=1;j<=l;j++)
  {
   scanf("%d",&a[i][j]);
  }
  printf("\n");
 }
 printf(" Matrix A is: \n");
 for (i=1;i<=k;i++)
 {
  for (j=1;j<=l;j++)
  {
   printf("%d \t",a[i][j]);
  }
  printf("\n");
 }

 printf("Enter the value of Matrix B");
 for (d=1;d<=m;d++)
 {
  for (e=1;e<=n;e++)
  {
   scanf("%d",&b[d][e]);
  }
  printf("\n");
 }
 printf("Matrix B is : \n");
 for (d=1;d<=m;d++)
 {
  for (e=1;e<=n;e++)
  {
   printf("%d \t",b[d][e]);
  }
  printf("\n");
 }
 printf("multiplication is : \n \n");
 for(f=1;f<=k;f++)
 {
  for(g=1;g<=l;g++)
  {
   c[f][g]=a[f][g]*b[f][g];
   printf("%d\t",c[f][g]);
  }
 printf("\n");
 }
 getch();
}
