#include<stdio.h>
main()
{

int n;
 printf("Enter value of n: ");
 scanf("%d",&n);
 
 int a[n],i;
 float sum=0;
 for(i=0;i<n;i++)
 {
 	printf("Enter a[%d]: ",i);
 	scanf("%d",&a[i]);
 	sum+=a[i];
 }
 printf("sum: %f\n",sum);
 printf("Average: %f",sum/n);
}
