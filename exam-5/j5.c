#include<stdio.h>
main()
{
	int n;
	printf("Enetr the Array's size : ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]");
		scanf("%d",&a[i]);
	}
	
	printf("Negative elements from array : ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
		else{
			printf(" ");
			}
	}	
	
}

