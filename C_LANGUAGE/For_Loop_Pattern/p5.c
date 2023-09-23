/*

 2   2   2   2   2
 4   4   4   4   4
 6   6   6   6   6
 8   8   8   8   8
 10   10   10   10   10

*/


#include<stdio.h>

int main()
{
	int i,j;

	for(i=2; i<=10; i+=2)
	{
		for(j=2; j<=10; j+=2)
		{
			printf(" %d  ",i);
		}
		printf("\n");
	}
	return 0;
}