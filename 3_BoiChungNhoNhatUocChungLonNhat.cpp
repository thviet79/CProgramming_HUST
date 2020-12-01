#include <stdio.h>

int main()
{
    long long a, b;
    printf("Nhap 2 so: ");
    scanf("%lld%lld", &a, &b);

    for (long long i = a;; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("Boi chung nho nhat cua hai so la %lld\n", i);
            break;
        }
    }

    for (long long i = a;; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("Uoc chung lon nhat cua hai so la %lld", i);
            break;
        }
    }
}