/*  Enter n print 1 t0 n */

#include<stdio.h>

int main()

{
  int a,n;

    printf(" Enter any value : ");
    scanf("%d\n",&n);

 	for(a=1;  a<=n; a++)

	{
		printf(" N is : %d\n",a);
	}

	return 0;
}

/*

 N is : 1
 N is : 2
 N is : 3
 N is : 4
 N is : 5

*/