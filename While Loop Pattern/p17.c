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
 
	int i=65,j,k=65;

	while(i<=69)
	{
		j=65;
		while(j<=i)
		{
		   if(j%2==0)
		   {
			printf("%c ",k);
		   }
		   else
		   {
			printf("%c ",k+32);
		   }

		   k++;
		   j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}