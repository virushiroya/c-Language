/*
 1  1  1  1  1 
 2  2  2  2  2 
 3  3  3  3  3 
 4  4  4  4  4 
 5  5  5  5  5 
*/
#include<stdio.h>

void Pattern()
{
    int i,j;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}

}

int main()
{
    Pattern();

    return 0;
}