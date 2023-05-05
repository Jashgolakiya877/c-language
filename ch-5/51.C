#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("enter no. a: ");
scanf("%d",&a);
printf("enter no. b: ");
scanf("%d",&b);
if(a<b)
{
   printf("minimum number:%d",a);
 }

 else
 {
 printf("maximum number:%d",b);
 }

getch();
}