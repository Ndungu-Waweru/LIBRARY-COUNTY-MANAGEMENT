/************************
 Project:Library        *
 Author:Daniel Waweru   *
 Date:19/7/2021         *
 License:MIT            *
 Compiler:C99           *
************************/
#include <stdio.h>
int main()
{
	int action;
	printf("\tCounty Library Management System:\n");
	printf("welcome Waweru\n");
	//navigation menu
	do{
	printf("1.Add user\n");
	printf("2.Add a book\n");
	printf("3.Exit\n");
	printf("Action (1-3):");
	scanf("%d",&action);
	if (action<1 || action>3)
	{
		printf("invalid action:\n");
	}
	}while (action < 1 || action > 3);
	//githubS
	
	
	return 0;
	
}
