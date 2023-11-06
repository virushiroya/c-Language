#include<stdio.h>

int main()
{
    int a,b;

    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);

    a>b?("a is greatest"):(a==b==c?printf("a and b equal"):printf("b is greatest"):printf("c is greatest"));
}