/*  enter n print n to 1 */

#include<stdio.h>

int main()

{
  int a,n;

    printf(" Enter any value : ");
    scanf("%d\n",&n);

 	for(a=n;  a>=1; a--)

	{
		printf(" N is : %d\n",a);
	}

	return 0;
}

/*

 N is : 5
 N is : 4
 N is : 3
 N is : 2
 N is : 1

*/