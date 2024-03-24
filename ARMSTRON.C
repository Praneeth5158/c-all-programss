#include<stdio.h>
void main()
{
int n=370,sum=0,rem,ori;
ori=n;
clrscr();
while(n>0)
{
rem=n%10;
sum+=rem*rem*rem;
n/=10;
}
if(sum==ori)
printf("armstrong number");
else
printf("not a armstrong number");
getch();
}

