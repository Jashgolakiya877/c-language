#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0,first,second;
 clrscr();
 printf("Enter the number: ");
 scanf("%d",&n);
 second=n%10;
 while(n>=10)
 {
	n=n/10;
 }
 first=n;
 sum=first+second;
 printf("Sum: %d",sum);
 getch();
}d