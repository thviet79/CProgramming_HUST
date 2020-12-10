#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((int)time(0));

    int n, so;
    printf("Guess the lucky number :)\nThe number is in the range [1;50]\n");
    scanf("%d", &n);
    so = rand() % 50 + 1;

    if (n == so)
    {
        printf("BINGO!! You guess it right on your first try!");
    }

    while (n - so)
    {
        if (n < so)
        {
            printf("You need to go higher! ");
        }
        else
        {
            printf("You need to go lower! ");
        }
        scanf("%d", &n);
    }
    printf("BINGO!!!");
}
