#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("enter the number a: ");
	scanf("%d",&a);
	(a%2==0)
		 ?printf("this number is even.")
		 :printf("this number is odd.");
	getch();
}