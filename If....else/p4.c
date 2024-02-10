/* Enter one value find its divisible by 5 and 3 or not*/

#include<stdio.h>

int main()
{
    int a;
    
	printf("Enter Any Nomber :");
	scanf("%d",&a);

	if(a%15==0)
	{
		printf("its divisible by 5 and 3");
	}
	else
	{
		printf("its not divisible by 5 and 3");
	}

	return 0;
}

/*
	Enter Any Nomber :45
	its divisible by 5 and 3

	Enter Any Nomber :13
	its not divisible by 5 and 3
*/