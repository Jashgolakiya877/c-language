#include<stdio.h>
void div();
void div(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
	
	printf("Given number is divisible by 3 & 5");
}
	else
	{
		
		printf("Given number is not divisible by 3 & 5");
	}
}
	main()

{
	div();
}
