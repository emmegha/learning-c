//program to count even & odd number & sum of even & odd number


#include<conio.h>
#include<stdio.h>


void main()
{

int a[100],i,n,even=0,odd=0,esum=0,osum=0;
clrscr();

printf("enter the number of elements to count\n\n");
scanf("%d",&n);
printf("enter  %d elements to count\n\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}


for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
even++;
esum=esum+a[i];
}

else
{
odd++;
osum=osum+a[i];
}
}

printf("count of even number is %d \n\n", even);
printf("count of odd number is %d\n\n",odd);
printf("total of even number is %d\n\n",esum);
printf("total of odd number is %d\n\n",osum);


getch();
}