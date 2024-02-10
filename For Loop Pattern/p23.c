/*

     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/

#include<stdio.h>

int main()

{

    int i,j,k,a,b,c;


	for(i=1; i<=5; i++)
        {
		for(j=5; j>=i; j--)
		{
		    printf(" ");
		}

		for(k=1; k<=i; k++)
		{
			
		
		   printf("* ");
		}

                printf("\n");

	}
	for(a=5; a>=1; a--)
	{

		for(b=a; b<=5; b++)
		{
		    printf(" ");
		}

		for(c=1; c<=a; c++)
		{
			
		
		   printf("* ");
		}
		printf("\n");
	}		
    return 0;

}	


