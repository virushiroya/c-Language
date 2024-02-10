/*
1 4 7
2 5 8
3 6 9
*/ 

#include<stdio.h>

int main()

{

    int a[3][3], i, j,k=1;

	
	for(i=0; i < 3; i++)
        {

                for(j=0; j <3; j++)

                {


                       a[i][j]=k;
			k++;
                }

        }



	for(i=0; i <3; i++)
        {

                for(j=0; j < 3; j++)

                {

			printf("%d ",a[j][i]);
			
                       
                }

			printf("\n");

        }


	return 0;
}