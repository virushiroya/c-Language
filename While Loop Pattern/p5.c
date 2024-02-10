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

	int i=2,j;

	while(i<=10)
	{
		j=2;
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

