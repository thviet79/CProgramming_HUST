#include <stdio.h>

int main()
{
    char c;
    int count = 1;

    printf("Enter your text: ");

    do
    {
        scanf("%c", &c);
        if (c == ' ')
            count++;
    } while (c != '\n');

    printf("Your text has %d words", count);
}