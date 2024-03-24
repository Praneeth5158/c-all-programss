#incluude<stdio.h>
void main()
{
int a=10,b=20,temp;
clrscr();
printf("before swapping a=%d,b=%d",a,b);
temp=a+b;
b=temp-b;
a=temp-a;
printf("after swapping a=%d,b=%d",a,b);
getch();
}