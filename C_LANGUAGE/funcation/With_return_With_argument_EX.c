/*
value of d is : 10
value of r is : A
value of c is : 10
value of d is : 15
value of r is : B
Value of main a is : 45
*/
#include<stdio.h>

int data(int c, int d, char r)
{
    printf("value of c is : %d\n",c);
    printf("value of d is : %d\n",d);
    printf("value of r is : %c\n",r);

    return 45;
}

int main()
{
    int a;

    a=data(5 ,10, 'A');

    data(10, 15, 'B');
    printf("Value of main a is : %d",a);

    return 0;
}