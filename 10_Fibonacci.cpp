#include <stdio.h>

int main()
{
    long long n;
    printf("Nhap gioi han day so: ");
    scanf("%lld", &n);
    printf("Day Fibonacci: ");

    long long a[n];
    a[0] = 1;
    a[1] = 1;

    for (long long i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (long long i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }
}