/*
two array with total print  
*/

#include<stdio.h>

int main()

{

    int Arr[5][5],i,j,total=0;

	for(i=0; i < 5; i++)
	{

	     for(j=0; j < 5; j++)
	   {
		printf("Enter Arr[%d][%d] =",i,j);
		scanf("%d",&Arr[i][j]);	
	   }
	}
	for(i=0; i < 5; i++)
	{

	     for(j=0; j < 5; j++)
	     {
 		total+=Arr[i][j];
		printf("%d ",Arr[i][j]);

	     }

	
		printf("\n");
	}

	printf("Total is : %d\n",total);

	return 0;
}
/*

Enter Arr[0][0] =1
Enter Arr[0][1] =1
Enter Arr[0][2] =1
Enter Arr[0][3] =1
Enter Arr[0][4] =1
Enter Arr[1][0] =1
Enter Arr[1][1] =1
Enter Arr[1][2] =1
Enter Arr[1][3] =1
Enter Arr[1][4] =1
Enter Arr[2][0] =1
Enter Arr[2][1] =1
Enter Arr[2][2] =1
Enter Arr[2][3] =1
Enter Arr[2][4] =1
Enter Arr[3][0] =1
Enter Arr[3][1] =1
Enter Arr[3][2] =1
Enter Arr[3][3] =1
Enter Arr[3][4] =1
Enter Arr[4][0] =1
Enter Arr[4][1] =1
Enter Arr[4][2] =1
Enter Arr[4][3] =1
Enter Arr[4][4] =1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
Total is : 25
*/