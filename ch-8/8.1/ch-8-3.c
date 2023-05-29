#include<stdio.h>
main()
{

int n;
 printf("Enter value of n: ");
 scanf("%d",&n);
 
 int i,a[n],b[n],c[n],d;
 printf("\n");
 	printf("Enter array A's  element\n ");
 	for(i=0;i<n;i++)
 	{
 		printf("Enter a[%d]: ",i);
 		scanf("%d",&a[i]);
	}
	printf("\n\n");
	printf("Enter array B's elemens ");
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("\n\n");
	printf("Array C is: ");
	for(i=0;i<n;i++)
	{
		d=a[i]+b[i];
		printf("%d,",d);
	}
}
