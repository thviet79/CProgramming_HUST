#include <stdio.h>

int main()
{
  printf("Enter the number of students: ");
  int n;
  scanf("%d", &n);

  printf("the number of students in the smallest class: %d\n", n / 7);
  printf("the number of students in the largest class: %d\n", (n + 6) / 7);
  printf("the average number of students per class: %f\n", n / 7 * 1.0);
  printf("the number of classes of above average size: %d\n", n % 7);
  printf("the number of classes of at most average size: %d\n", 7 - n % 7);
  printf("the number of students in classes of larger than average size: %d\n", (n % 7) * ((n + 6) / 7));
  printf("the number of classes of exactly average size: %d\n", n % 7 == 0 ? 7 : 0);
}
