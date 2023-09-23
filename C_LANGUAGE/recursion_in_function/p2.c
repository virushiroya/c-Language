// using recursion function fibonnaci series. 0,1,1,2,3,5,8,13,21,34,

#include<stdio.h>

int fibonnaci(int a)
{
        if(a == 0)
        {
            return 0;
        }
        else if (a == 1)
        {
            return 1;
        }

        return fibonnaci(a - 1)+ fibonnaci(a - 2);

}
int main ()
{
    for(int i=0; i<10; i++)
    {
        printf("%d,",fibonnaci(i));
    }
}