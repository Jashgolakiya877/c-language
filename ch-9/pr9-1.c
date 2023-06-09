#include<stdio.h>
main()
{
	char rev[20],name[20];
	int i,com,len;
	printf("Enter your name: ");
	gets(name);
	
	strcpy(rev,name);
	len=strlen(name);
	
	strrev(name);
	com=strcmp(name,rev);
	if(com==0)
	{
		printf("this name is palindrome");
	}
	else
	{
		printf("this name is not palindrome");
	}
}
