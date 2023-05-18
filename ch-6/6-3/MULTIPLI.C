#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("Enter the number : ");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
	printf("\n %d * %d = %d",i,n,i*n);
 }
 getch();
}