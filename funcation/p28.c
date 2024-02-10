/*
A 
B C 
D E F 
G H I J 
K L M N O 
*/
#include<stdio.h>

void WPattern()
{
    int i=65,j,k=65;

	while(i<=69)
	{
	   j=65;
	   while(j<=i)
	   {
		printf("%c ",k);
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