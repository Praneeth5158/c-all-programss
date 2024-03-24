#include<stdio.h>
void main()
{
int a=5,b=6;
clrscr();
printf("before swapping %d%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping %d%d",a,b);
getch();
}