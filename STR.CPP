#include<stdio.h>
void main()
{
int i,n1=0,n2=1,n=100,nt;
clrscr();
printf("%d%d",n1,n2);
for(i=1;i<=n;i++)
{
n1=n2;
n2=nt;
nt=n1+n2;
}
printf("%d,",nt);
getch();
}
