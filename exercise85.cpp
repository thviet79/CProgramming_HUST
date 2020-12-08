#include <stdio.h>

int main()
{
    int stunum;
    printf("Enter the number of students: ");
    scanf("%d", &stunum);
    
    int passed = 0, failed = 0;
    char result;

    for (int i = 1; i <= stunum; i++)
    {
        printf("Student %d's status (1 = passed, 2 = failed): ", i);
        scanf(" %c", &result);
        switch (result)
        {
        case '1':
            passed++;
            break;
        case '2':
            failed++;
            break;
        default:
            printf("Your value is not valid!\n");
            break;
        }
    }

    printf("The number of passed students: %d\nThe number of failed students: %d\n", passed, failed);
}
