#include<stdio.h>
main()
{
	int  r,c;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
	
	int i,a[r][c],j,d;
	float A;
	float sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	d=i*j;
	A=sum/d;
	printf("\n\n");
	printf("average : %f",A);
	
}
