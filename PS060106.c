#include <stdio.h>

int main(void)	
{
	char c1;
	scanf("%c",&c1);
	if (c1>='a' && c1<='z')
	{
		printf("+");
	}
	else 
	{
		printf("?");
	}
	return 0;
} 
