#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,n;
 clrscr();
 printf("Enter the number: ");
 scanf("%d",&n);
 while(i<=10)
 {
	printf("table: %d : %d * %d \n",n,i,n*i);
	i++;
 }
 getch();
}