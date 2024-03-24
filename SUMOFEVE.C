#include<stdio.h>
#include<conio.h>
int main()
{
//sum of even digits for a given number
int rem,sum=0;
long int num=384228;
clrscr();
while(num>0)
{
rem=num%10;
if(rem%2==0)
{
sum+=rem;
}
num/=10;
}
printf("%d",sum);
getch();
return 0;
}


