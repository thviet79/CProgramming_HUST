#include <stdio.h>

int main()
{
    printf("Enter your number: ");
    int n;
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Your number must not be negative! ");
        scanf("%d", &n);
    }

    int giaithua = 1;

    for (int i = 1; i <= n; i++)
    {
        giaithua *= i;
    }

    printf("%d! = %d\n", n, giaithua);
}
