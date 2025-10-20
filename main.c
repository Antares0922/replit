#include <stdio.h>

int main(int argc, char *argv[]) {
  int x, y, z;
  x = 9;
  y = x + 10;

  printf("Write a number:");
  scanf("%i", &z);

  printf("the number is %i\n", x + y + z);
  return 0;
}
