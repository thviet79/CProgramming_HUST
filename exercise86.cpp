#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Your number is not valid!\n");
    } while (n <= 0);

    int so = 0;
    printf("Output: ");

    do
    {
        printf("%d ", so);
        so++;
    } while (so < n);
    printf("\n");
}
