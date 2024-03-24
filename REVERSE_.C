#include<stdio.h>
void main()
{
int n=123,rem,rev=0;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("the reversed number =%d",rev);
getch();
}