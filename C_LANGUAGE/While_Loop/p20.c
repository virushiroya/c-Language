/*
enter n:5
0.500000
 1.000000
 2.500000
 5.000000
 8.500000
 13.000000


*/

#include<stdio.h>
#include<conio.h>

int main()

{
	
	float i=0.5,n,j=0.5;
	
	printf("enter n:");
	scanf("%f",&n);
                                         
	printf("%f",j);

	while(i<=n)
	{
  		j+=i*1;
		printf("\n %f",j);
		i++;
	}
	
	
	return 0;

}