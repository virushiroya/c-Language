/*
	1 0 0
	0 1 0
	0 0 1
*/

#include<stdio.h>
int main()
{
  int a[3][3],i,j;


	
for(int i=0; i < 3; i++)
        {

                for(int j=0; j <3; j++)

                {
			if(i==j)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=0;
			}
                }

        }



	for(int i=0; i <3; i++)
        {

                for(int j=0; j < 3; j++)

                {

			printf("%d ",a[j][i]);
			
                       
                }

			printf("\n");

        }


	return 0;
}