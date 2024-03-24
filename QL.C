#include<stdio.h>
void main()
{
int age[5]={5,9,12,23,34};
int a=500,c=250,sum,ac=0,cc=0;
for(age=1;age<=5;age++)
{
if(age<12)
cc+=c;
else
ac+=a;
sum=cc+ac;
}
printf("the total amount=%d",sum);
getch();
}

