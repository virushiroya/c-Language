/*  A,c,E,g,I,...... */

#include<stdio.h>

int main()
{
	char a;

	for(a=65; a<=90; a+=2)

	{
		if(a%4==1)
		{
			printf("%c\t",a);
		}
		else
		{
			printf("%c\t",a+32);
		}	
	}	

	return 0;
}

/*

A       c       E       g       I       k       M       o      Y

*/