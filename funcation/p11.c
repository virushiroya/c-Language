/*
A : 10
A : 9
A : 8
A : 7
A : 6
A : 5
A : 4
A : 3
A : 2
A : 1
*/
#include<stdio.h>

void Forloop()
{
    int a;
    
    for(a=10;  a>=1; a--)
	{
		printf("A : %d\n",a);
	}

}

int main()
{
    Forloop();

    return 0;
}