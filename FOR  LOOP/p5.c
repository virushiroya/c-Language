/*  enter n print -n to n */

#include<stdio.h>

int main()

{
  int a,n;

    printf(" Enter any value : ");
    scanf("%d",&n);

 	for(a=-n;  a<=n; a++)

	{
		printf(" N is : %d\n",a);
	}

	return 0;
}

/*

 Enter any value : 5
 N is : -5
 N is : -4
 N is : -3
 N is : -2
 N is : -1
 N is : 0
 N is : 1
 N is : 2
 N is : 3
 N is : 4
 N is : 5


*/