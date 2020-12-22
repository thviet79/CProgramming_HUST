#include <stdio.h>

long long Salary(int hrs)
{
    if (hrs <= 40)
        return 15000 * hrs;
    else
        return 15000 * 40 + (hrs - 40) * 15000 * 3 / 2;
}

int main()
{
    int n;
    printf("Enter working time (hours): ");
    scanf("%d", &n);

    while (n < 10 || n > 65)
    {
        printf("Invalid value!\n");
        scanf("%d", &n);
    }

    printf("Salary: %lld VND\n", Salary(n));
}
