/*

Enter Arr[0][0] =1
Enter Arr[0][1] =2
Enter Arr[0][2] =3
Enter Arr[1][0] =0
Enter Arr[1][1] =5
Enter Arr[1][2] =6
Enter Arr[2][0] =7
Enter Arr[2][1] =8
Enter Arr[2][2] =0
1       2       3
        5       6
7       8


*/

#include <stdio.h>

int main()

 {
    int arr[3][3];

	
	for(int i=0; i < 3; i++)
	{

	     for(int j=0; j < 3; j++)
	   {
		printf("Enter Arr[%d][%d] =",i,j);
		scanf("%d",&arr[i][j]);	
	   }


	}

   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
         {
            if (arr[i][j] != 0)
             {
                  printf("%d\t",arr[i][j]);
             }
	    else 
	    {
                printf(" \t"); 
            }
        }
        printf("\n");
    }

    return 0;
}
