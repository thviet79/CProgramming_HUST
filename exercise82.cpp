#include <stdio.h>

int main()
{
    char c;

    for (;;)
    {
        c = getchar();

        switch (c)
        {
        case '\t':
        case '\b':
            printf("\\");
            printf("\\");
            break;

        default:
            putchar(c);
            break;
        }
    }
}
