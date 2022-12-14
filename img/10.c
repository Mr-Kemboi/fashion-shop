#include<stdio.h>
int main()
{
int a,b;
for(a=4;a>=1;a--)
{
for(b=1;b<=a;b++)
{
printf("%d",(b*5 )+5 );
}
printf("\n");
}
return 0;
}