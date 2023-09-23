/*
5 
4 5 
3 4 5 
2 3 4 5 
1 2 3 4 5
*/

#include<stdio.h>

void WPattern()
{
      int a=5,b;
   
	while(a>=1)
	{
		b=a;
		while(b<=5)
		{
			printf("%d ",b);
			b++;
		}
	        printf("\n");
		a--;
	}

}

int main()
{
    WPattern();

    return 0;
}