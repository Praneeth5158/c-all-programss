#include<stdio.h>
void main()
{
int odd_sum=0,even_sum=0,o_count=0,e_count=0,i;
clrscr();
for(i=0;i<=10;i++)
{
if(i%2==0){
even_sum=even_sum+i;
e_count++; }
else
{
odd_sum=odd_sum+i;
o_count++;
}
}
printf("the total no.of even numbers=%d\n",e_count);
printf("the total even_sum=%d\n",even_sum);
printf("the total no.of odd numbers=%d\n",o_count);
printf("the total odd_sum=%d",odd_sum);
getch();
}

