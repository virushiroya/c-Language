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
	int i,j,k=65;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
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
		}

		printf("\n");
	}
	return 0;
}