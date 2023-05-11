#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  float a,b,c,x;
  clrscr();
  printf("\n\tENTER  UNITS:");
  scanf("%d",&n);
  if(n>=1 && n<=50)
{
	x=n*0.5;
	printf("\n\n\tELECTRICITY BILL: %f",(x*0.2)+x);
}
else if(n>=51 && n<=150)
{
	a=((n-50)*0.75)+25;
	printf("\n\n\tELECTRICITY BILL: %f",(a*0.2)+a);
}
else if(n>=151 && n<=250)
{
	b=((n-150)*1.2)+100;
	printf("\n\n\tELECTRICITY BILL: %f",(b*0.2)+b);
}
else if(n>250)
{
	c=((n-250)*1.5)+220;
	printf("\n\n\tELECTRICITY BILL: %f",(c*0.2)+c);
}
else
	{
		printf("\n\n\tINVALID INPUT!!");
	}
getch();
}