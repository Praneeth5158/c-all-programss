#include<math.h>
void main()
{
int i,n=3;
double res,sums=0.0,ser;
clrscr();
for(i=1;i<=n;i++)
{
ser=1/pow(i,i);
sums+=ser;
}
printf("%f",sums);
getch();
}
