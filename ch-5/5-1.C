#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 printf("enter a: ");
 scanf("%d",&a);
 printf("enter b: ");
 scanf("%d",&b);
 printf("enter c: ");
 scanf("%d",&c);
 if(a==b && b==c && c==a)
 {
	printf("all are same %d",a);
 }
 else if(a==b)
 {
	if(a<c)
	{
		printf("a and b are small %d",a);
	}
	else
	{
		printf("c is small %d",c);
	}
 }
 else if(c==b)
 {
	if(b<a)
	{
		printf("b and c are small %d",b);
	}
	else
	{
		printf("a is small %d",a);
	}
  }

  else if(a==c)
  {
	if(a<b)
	{
		printf("a and c are small %d",a);
	 }
	 else
	 {
		printf("b is small %d",b);
	 }
   }

   else if(a<b)
   {
	if(a<c)
	{
		printf("a is small %d",a);
	}
	else
	{
		printf("c is small %d",c);
	}
    }
    else
    {
	if(b<c)
	{
		printf("b is small %d",b);
	 }
	 else
	 {
		printf("c is small %d",c);
	 }
  }
 getch();

 }