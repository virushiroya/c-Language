/*

a
b C
d E f
g H i J
k L m N o

*/

#include<stdio.h>

int main()
{
	int i,j,k=65;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{

		   if(j%2==1)
		   {

			printf("%c ",k+32);
		   }	
		   else
		   {
			printf("%c ",k);	
		  
		   }	
			k++;
		}

		printf("\n");
	}
	return 0;
}