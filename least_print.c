#include<stdio.h>
unsigned least(unsigned c,unsigned d)
{
unsigned e,f;
if(d<=0)
{
return c;
}
if(c==0)
{
return 10;}
e=least(c/10,d)*10+c%10;
f=least(c/10,d-1);
return e<f?e:f;
}
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
printf("%d",least(a,b));
getch();
}
