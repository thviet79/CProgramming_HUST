#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("%d! = %lld\n", n, fact);
}
