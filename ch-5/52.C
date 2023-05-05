#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 clrscr();
 printf("enter any number:");
 scanf("%d",&n);
 if(n<0)
 {
 printf("negative number");
 }
 else if(n==0)
 {
 printf("neutral number");
 }
 else
 {
 printf("positive number");
 }
 getch();

}