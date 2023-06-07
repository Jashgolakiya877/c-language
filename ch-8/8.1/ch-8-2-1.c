#include<stdio.h>
void main()
{

 int n1,n2;
 
 printf("Enter Array number 1 : ");
 scanf("%d",&n1);
 
 printf("Enter Array number 2 : ");
 scanf("%d",&n2);
 
 int a[n1],i,b[n2],c;
 
 for(i=0;i<n1;i++)
 {
 	
 	printf("Enter a[%d] : ",i);
 	scanf("%d",&a[i]);
 }
 
  for(i=0;i<n2;i++)
  {
  	
 	printf("Enter b[%d] : ",i);
 	scanf("%d",&b[i]);
 }
  for(i=0;i<n1;i++)
  {
  	c
	  [i]=a[i];
  } 
  for(i=0;i<n2;i++)
  
  {
	c[i+n1]=b[i];  	
  }
  printf("");
}
