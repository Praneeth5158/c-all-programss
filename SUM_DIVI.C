#include<stdio.h>
void main()
{
int count=0,sum=0,i;
clrscr();
for(i=0;i<=50;i++)
{
if(i%5==0)
{
sum=sum+i;
count++;
}
printf("the total sum=%d",sum);
printf("the total count=%d,count);
}
getch();
}

