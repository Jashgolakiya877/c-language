#include<stdio.h>
#include<conio.h>
main()
{
int a=5,b=10;
clrscr();
printf("a:%d,b:%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a:%d,b:%d\n",a,b);
getch();
}