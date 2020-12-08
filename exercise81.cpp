#include <stdio.h>

int main()
{
    char c;
    int dem = 0;

    for (;;)
    {
        scanf("%c", &c);

        if (c == ' ')
        {
            if (dem)
                continue;
            printf("%c", c);
            dem++;
        }
        else
        {
            printf("%c", c);
            dem = 0;
        }
    }
}
