/*
A       c       E       g       I       k       M       o       Q       s       U       w       Y
*/
#include<stdio.h>

void Whileloop()
{
     int a=65;

	while(a<=90)
	{
		if(a%4==1)
		{
			printf("%c\t",a);
		}
		else
		{
			printf("%c\t",a+32);
		}
		a+=2;

    }    

}

int main()
{
    Whileloop();

    return 0;
}