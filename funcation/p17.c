/*
enter n:5
0.500000
 1.00
 2.50
 5.00
 8.50
 13.00

*/
#include<stdio.h>

void Whileloop()
{
    float i=0.5,n,j=0.5;
	
	printf("enter n:");
	scanf("%f",&n);
                                         
	printf("%f",j);

	while(i<=n)
	{
  		j+=i*1;
		printf("\n %.2f",j);
		i++;
	}
	
}


int main()
{
    Whileloop();

    return 0;
}