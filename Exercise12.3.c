#include <stdio.h>

long long SumCube(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }
    return sum;
}

void SubList(int n)
{
    printf("Submutiples of %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
}

void SquareList(int n)
{
    printf("First %d square numbers: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Sum of cube: %lld\n", SumCube(n));
    SubList(n);
    printf("\n");
    SquareList(n);
    printf("\n");
}
