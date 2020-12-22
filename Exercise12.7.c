#include <stdio.h>

int Ktra(int n)
{
    if (n % 2 == 0)
    {
        while (n)
        {
            n /= 10;
            if (n % 2 == 1)
                return 0;
        }
    }
    else
    {
        while (n)
        {
            if (n < 10)
            {
                if (n % 2 == 0)
                    return 0;
                break;
            }
            n /= 10;
            if (n % 2 == 0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (Ktra(n == 1))
        printf("True.\n");
    else
        printf("False.\n");
}
