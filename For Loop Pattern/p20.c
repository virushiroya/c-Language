
/*
 A
 B  A
 C  B  A
 D  C  B  A
 E  D  C  B  A
*/

#include<stdio.h>

int main()
{
	int i,j;

	for(i=65; i<=69; i++)
	{
		for(j=i; j>=65; j--)
		{
			printf(" %c ",j);
		}
		printf("\n");
	}
	return 0;
}