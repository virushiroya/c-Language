/*

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1


*/

#include<stdio.h>

int main()
{

	int i=5,j;

	while(i>=1)
	{
		j=5;
		while(j>=i)
		{
			printf("%d ",i);
			j--;
		}
	     printf("\n");
	     i--;	
	}
	
	return 0;

}
