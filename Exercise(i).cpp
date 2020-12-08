#include <stdio.h>

//Write a program which prints out the prime factorization of a number.

int main()
{
    printf("Enter your number: ");

    int n;
    scanf("%d", &n);

    printf("%d = ", n);

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            printf("%d", i);

            if (n != 1)
                printf("*");
        }
    }
    printf("\n");
}
