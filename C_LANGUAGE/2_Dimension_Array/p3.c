/*
Enter Arr[0][0] =1
Enter Arr[0][1] =2
Enter Arr[0][2] =3
Enter Arr[1][0] =4
Enter Arr[1][1] =5
Enter Arr[1][2] =6
Enter Arr[2][0] =7
Enter Arr[2][1] =8
Enter Arr[2][2] =9
1 2 3
4 5 6
7 8 9
upper triangle : 11
 diagonal elements total : 15
lower triangle : 19  
*/

#include<stdio.h>

int main()

{

    int Arr[3][3],i,j,total=0,u,d,l;

	for(i=0; i < 3; i++)
	{

	     for(j=0; j < 3; j++)
	   {
		printf("Enter Arr[%d][%d] =",i,j);
		scanf("%d",&Arr[i][j]);	
	   }
	}
	for(i=0; i < 3; i++)
	{

	     for(j=0; j < 3; j++)
	     {
		u=Arr[0][1]+Arr[0][2]+Arr[1][2];

		d=Arr[0][0]+Arr[1][1]+Arr[2][2];

		l=Arr[1][0]+Arr[2][0]+Arr[2][1];		

		printf("%d ",Arr[i][j]);

	     }
		
		printf("\n");
	}

	printf("upper triangle : %d\n ",u);

	printf("diagonal elements total : %d \n",d);

	printf("lower triangle : %d ",l);
	
	return 0;
}