/*

11  12  13  14  15
21  22  23  24  25
31  32  33  34  35
41  42  43  44  45
51  52  53  54  55

*/

#include<stdio.h>

int main()
{

	int i=1,j,k=11;

	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("%d  ",k);
			k++;
			j++;
			
		}
	     printf("\n");
	     k+=5;	
	     i++;	
	}
	
	return 0;

}

