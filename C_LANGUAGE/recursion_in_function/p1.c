// using recursion function (2-D , 1-D) = 1D

#include<stdio.h>

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int showArray(int a)
{
    printf("%d, ", arr[a]);

    if (a == 9)
    {
        return 0;
    }

    return showArray(++a);
}

int main()
{
    showArray(0);
}