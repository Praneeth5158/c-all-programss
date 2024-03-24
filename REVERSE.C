#include<stdio.h>
void main()
{
int n=153,rem,sum=0;
while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
printf("%d",sum);
getch();
}