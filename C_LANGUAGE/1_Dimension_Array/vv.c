#include <stdio.h>

int binary_serch(int n, int min, int max)
{
    int mid;
    mid = min+(max - min) / 2;

    if (n == mid)
    {
        return 1;
    }
    else if (n > mid)
    {
        min == mid;
        return binary_serch(n, min, max);
    }
    else if (n < mid)
    {
        max == mid;
        return binary_serch(n, min, max);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int a[10] = {1, 2, 3, 2, 1, 5, 6, 7, 4, 6}, i, k, j, mid, min, max, x = 6,result;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                a[j] = a[i] + a[j]; // b=a
                a[i] = a[j] - a[i]; // a=b-a
                a[j] = a[j] - a[i]; // b=b-a
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    min = a[0];
    max = a[9];

    result = binary_serch(x, min, max);

    if (result == 1)
    {
        printf("x is present in an array");
    }
    else
    {
        printf("x is not present in an array");
    }
    return 0;
}