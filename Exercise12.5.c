#include <stdio.h>

void printnchars(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", ch);
    }
    printf("\n");
}

int main()
{

    printf("*-triangle with edge of 4:\n");
    for (int i = 1; i <= 4; i++)
    {
        printnchars('*', i);
    }

    printf("\n");

    printf("*-triangle with edge of 5:\n");
    for (int i = 1; i <= 5; i++)
    {
        printnchars('*', i);
    }
    printf("\n");
}
