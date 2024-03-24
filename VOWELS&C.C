#include<stdio.h>
void main()
{
char c='ve';
int lowercase_vowels,uppercase_vowels,count=0;
clrscr();
lowercase_vowels=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppercase_vowels=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowercase_vowels||uppercase_vowels)
{
count+=1;
{
printf("the given alphabet is an vowel=%c",c);
}
}
else
{
printf("the given alphabet is not an vowel=%c",c);
}
getch();
}