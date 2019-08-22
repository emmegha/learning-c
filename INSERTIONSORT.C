//program for insertion sort


#include<stdio.h>
#include<conio.h>

void main()
{

int a[100];
int i,n,j,temp;

clrscr();

printf("enter the number of elements you want to sort\n");
scanf("%d",&n);


printf("enter the %d elements for sorting\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=1;i<n;i++)
{
temp = a[i];
j = i-1;

while(j>=0 && a[j]>temp)
{
a[j+1] = a[j];
j--;
}
a[j+1] = temp;
}


printf("the sorted %d elements are\n",n);
for(i=0;i<n;i++)
{
printf("%d\n",&a[i]);
}

getch();
}
