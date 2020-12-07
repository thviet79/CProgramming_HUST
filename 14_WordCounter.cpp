#include <stdio.h>

int main()
{
    char c;
    int count = 0;

    printf("Enter your text: ");

    int reset = 1;

    do
    {
        scanf("%c", &c);
        if (c == ' ' || c == '\t')
        {
            if (reset == 0)
            {
                count++;
                reset = 1;
            }
        }
        else
            reset = 0;
    } while (c != '\n');

    printf("Your text has %d words", ++count);
}
