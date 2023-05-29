#include<stdio.h>
main()
{

int n;
 printf("Enter value of n: ");
 scanf("%d",&n);
 
 int a[n],i;
 for(i=0;i<n;i++)
 {
 	printf("Enter a[%d]: ",i);
 	scanf("%d",&a[i]);
 }
  for(i=0;i<=n;i++)
  {
  	printf("a[%d]: %d\n",i,a[i]);   
  }
}

