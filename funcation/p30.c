/*
1  
2  3  
4  5  6  
7  8  9  10  
11  12  13  14  15  

*/

#include<stdio.h>

void WPattern()
{
    	int i=1,j,k=1;

	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d  ",k);
			k++;
			j++;
			
		}
	     printf("\n");
	     i++;	
	}
}

int main()
{
    WPattern();

    return 0;
}