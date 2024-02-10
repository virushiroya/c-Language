/*

1   1   1   1   1
3   3   3   3   3
5   5   5   5   5
7   7   7   7   7
9   9   9   9   9


*/

#include<stdio.h>

int main()
{

	int i=1,j;

	while(i<=10)
	{
		j=1;
		while(j<=10)
		{
			printf("%d   ",i);
			j+=2;
		}
	     printf("\n");
	     i+=2;	
	}
	
	return 0;

}
