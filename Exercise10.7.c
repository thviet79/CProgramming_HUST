#include <stdio.h>

int main()
{
    int n;
    printf("Enter matrix size:\n");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                printf("The matrix is not symmetric!\n");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric!\n");
}
