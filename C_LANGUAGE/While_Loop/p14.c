/*

1,4,9,16,25,36,49,64,81,100,

*/

#include<stdio.h>
#include<conio.h>

int main()

{
    int a=1,b;

	while(a<=10)
	{
		b=a*a;
		printf("%d,",b);
		a++;
	}
	
     return 0;
}