//program to perform binary search

#include<stdio.h>
#include<conio.h>

void main()
{
int a[100],n,i,first,last,middle,search;
printf("enter the number of elements \n");
scanf("%d",&n);
printf("enter %d elements \n",n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=0;
last=n-1;
middle=first+last/2;
while(first<=last)

{
if(a[middle]<search)
first=middle+1;
else if (a[middle]==search)
{
printf("%d found at %d location \n",search,middle+1);
break;
}
else
last=middle-1;
middle=first+last/2;
}
if(first>search)
printf("\n %d not found in the list",n);
getch();
}

































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































