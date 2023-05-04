#include<stdio.h>
#include<conio.h>

main()
{
 float a=100,b,c,d,e;
 clrscr();
 b=a*0.10;
 c=a*0.05;
 d=a*0.08;
 printf("base salary : %.2f\n",a);
 printf("HRA : %.2f\n",b);
 printf("DA  : %.2f\n",c);
 printf("TA : %.2f\n",d);
 e=a+b+c+d;
 printf("total: %.2f",e);
 getch();
}
