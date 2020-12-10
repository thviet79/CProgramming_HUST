#include <stdio.h>

int main()
{
  char c;
  printf("Enter the day of the week: ");
  scanf("%c", &c);

  int ovn, threeday, weekly;
  printf("Enter overnight: ");
  scanf("%d", &ovn);
  printf("Enter three-day: ");
  scanf("%d", &threeday);
  printf("Enter weekly: ");
  scanf("%d", &weekly);

  printf("\nDay: %c.\nTotal cost: %d$", c, ovn * 7 + threeday * 5 + weekly * 3);
}
