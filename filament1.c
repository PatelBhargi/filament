#include<stdio.h>

main()
{
	char a[100],b[100];
	printf("enter the string you want to check:-");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("entered string is palindrome.");
	}
	else
	{
		printf("entered string is not palindrome.");
	}
}

