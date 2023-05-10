#include<stdio.h>
#include<conio.h>
main()
{
 int choice;
 clrscr();
 printf("enter .......\n");
 printf("press 1 for english language\n");
 printf("enter 2 for hindi language\n");
 printf("enter 3 for gujarati language\n");
 printf("enter your choice:");
 scanf("%d",&choice);
 switch(choice)
	{
		case 1:
			printf("\n\nyou selected english language\n\n");
			printf("enter ...\n");
			printf("press 1 for internet recharge!!\n");
			printf("press 2 for top-up recharge!!\n");
			printf("press 3 for special recharge!!\n");
			printf("enter your choice:");
			scanf("%d",&choice);
			break;
		case 2:
			printf("\n\nyou selected hindi language\n\n");
			printf("enter...\n");
			printf("internet recharge ke liye 1 dabaiye!!\n");
			printf("top-up rechage ke liye 2 dabaiye!!\n");
			printf("special recharge ke liye 3 dabaiye!!\n");
			printf("enter your choice:");
			scanf("%d",&choice);
			break;
		case 3:
			printf("\n\nyou selected gujarati language\n\n");
			printf("enter...\n");
			printf("internet recharge mate 1 dabavo!!\n");
			printf("top-up rechage mate 2 dabavo!!\n");
			printf("special recharge mate 3 dabavo!!\n");
			printf("enter your choice:");
			scanf("%d",&choice);
			break;



		}
		printf("\n\n------you have succesfully recharged------\n\n");
		getch();
}