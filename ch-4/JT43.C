#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;


clrscr();
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);

a=(a*a*a)+(b*b*b)+(3*a*a*b)+(3*b*b*a);
printf("Answer: %d ");
getch();
}