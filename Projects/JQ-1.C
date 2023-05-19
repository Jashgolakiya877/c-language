#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,n,sum;
 clrscr();
 printf("Enter the value: ");
 scanf("%d",&n);
 while(i<=n)
 {
	if(i*i==n)
	{
		printf("%d",i);
	}
	i++;
 }
 getch();
}