/*
A
b c
D E F
g h i j
K L M N O
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
		   if(i%2==0)
		   {
			printf("%c ",k+32);
		   }
		   else
		   {
			printf("%c ",k);
		   }

		   k++;
		   j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}