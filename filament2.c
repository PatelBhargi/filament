#include<stdio.h>

main()
{
	char a[100],b[100];
	printf("enter your username:-");
	gets(a);
	printf("enter your password:-");
	gets(b);
	
	if(strcmp(a,"bhargi")==0)
	{
		if(strcmp(b,"bhargi@220")==0)
		{
			printf("user.....loging........successfully....");
		}
		else
		{
			printf("your enteres password is invalid.");
		}
		
		
	}
	else
	{
		printf("your entered username is invalid.");
	}
}
