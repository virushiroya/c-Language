/*
 1   1   1   1   1  
 3   3   3   3   3
 5   5   5   5   5
 7   7   7   7   7
 9   9   9   9   9
*/
#include<stdio.h>

void Pattern()
{
    int i,j;

	for(i=1; i<=10; i+=2)
	{
		for(j=1; j<=10; j+=2)
		{
			printf(" %d  ",i);
		}
		printf("\n");
	}

}

int main()
{
    Pattern();

    return 0;
}