#include<stdio.h>
main()
{
	char i,pass[20],u=0,l=0,s=0,d=0,length;
	printf("Create your password: ");
	gets(pass);
	length=strlen(pass);

	for(i=0;i<length;i++)
{
	
	{
	if(pass[i]>=65 && pass[i]<=90)
		u++;
    }
	else if(pass[i]>=97 && pass[i]<=122)
	{
		d++;
	}
	else if(pass[i]>=48 && pass[i]<=57)
	{
		l++;
	}
	else
	{
		s++;
	}
}
	if(u>0 && d>0 && l>0 && s>0 && length>=6)
	{
		printf("your password is strong. ");
	}
	else
	{
		printf("ypur password is not strong.");
	}
	
}
