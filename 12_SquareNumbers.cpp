#include <stdio.h>

// int Square_num(long long n)
// {
//     for (long long i = 1; i <= n; i++)
//     {
//         if (i * i == n)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
//Cách này dài vl nên thôi bỏ.

int main()
{
    long long n;
    long long count = 0;
    printf("Enter your number: ");
    scanf("%lld", &n);

    printf("Square numbers: ");

    for (long long i = 1; i * i <= n; i++)
    {
        printf("%lld ", i * i);
        count++;
    }

    printf("\nThere are %lld square numbers that have lower value than %lld", count, n);
}