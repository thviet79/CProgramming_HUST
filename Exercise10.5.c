#include <stdio.h>

int Q_a(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            count++;
    }
    return count;
}

int Q_b(int a[], int n)
{
    int count = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
        {
            if (temp > count)
            {
                count = temp;
                temp = 0;                
            }
        }
        else
            temp++;
    }
    return count;
}

void Q_c(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    int count;
    for (int i = 0; i < n;)
    {
        count = 0;
        int j = i;
        while (a[i] == a[j])
        {
            count++;
            j++;
            if (j == n)
            {
                printf("\n%d appears %d time(s)", a[i], count);
                return;
            }
        }
        printf("\n%d appears %d time(s)", a[i], count);
        i = j;
    }
}

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nNumber of 0s: %d", Q_a(a, n));
    printf("\nThe length of the subsequence that consists the consecutive number 0: %d", Q_b(a, n));
    Q_c(a, n);
}
