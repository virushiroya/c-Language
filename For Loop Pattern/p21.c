/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>

int main()

{

 int i,j,k=1;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{	
			printf("%d ",k%2==1);
			k++;
		}
		
		printf("\n");
	}

	return 0;
}