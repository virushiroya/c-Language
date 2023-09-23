/*
Enter possitive or negative value :-2
negative value
*/

#include<stdio.h>

void IFfunction()
{
    float a;
    printf("Enter possitive or negative value :");
    scanf("%d",&a);

    if (0<a)
    {
        printf("Positive value");
    }
    else
    {
        printf("negative value");
    }
}
int main()
{
    IFfunction();

    return 0;
}